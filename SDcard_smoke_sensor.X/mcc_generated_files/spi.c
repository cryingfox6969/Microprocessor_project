/**
  MSSP Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    mssp.c

  @Summary
    This is the generated driver implementation file for the MSSP driver using MPLAB� Code Configurator

  @Description
    This source file provides APIs for MSSP.
    Generation Information :
        Product Revision  :  MPLAB� Code Configurator - v2.25
        Device            :  PIC18F25K20
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

/**
  Section: Included Files
 */

#include <xc.h>
#include "spi.h"

/**
  Section: Macro Declarations
 */

#define SPI_RX_IN_PROGRESS 0x0

/**
  Section: Module APIs
 */

void SPI_Initialize(void) {
    SSPSTAT = 0x40; // CKE=1, SMP=0
    SSPCON1 = 0x22; // Master FOSC/64 => ~125kHz
    SSPCON1bits.SSPOV = 0;
    SSPCON1bits.WCOL  = 0;
    SSPADD = 0x00;
}

void SPI_Open(void) {
    SSPSTAT = 0x40; // CKE=1, SMP=0
    SSPCON1 = 0x20; // Master FOSC/4 => 2 MHz
    SSPCON1bits.SSPOV = 0;
    SSPCON1bits.WCOL  = 0;
    SSPADD = 0x00;
}

uint8_t SPI_Exchange8bit(uint8_t data) {
    // Clear the Write Collision flag, to allow writing
    SSPCON1bits.WCOL = 0;

    SSPBUF = data;

    while (SSPSTATbits.BF == SPI_RX_IN_PROGRESS) {
    }

    return (SSPBUF);
}

uint8_t SPI_Exchange8bitBuffer(uint8_t *dataIn, uint8_t bufLen, uint8_t *dataOut) {
    uint8_t bytesWritten = 0;

    if (bufLen != 0) {
        if (dataIn != NULL) {
            while (bytesWritten < bufLen) {
                if (dataOut == NULL) {
                    SPI_Exchange8bit(dataIn[bytesWritten]);
                } else {
                    dataOut[bytesWritten] = SPI_Exchange8bit(dataIn[bytesWritten]);
                }

                bytesWritten++;
            }
        } else {
            if (dataOut != NULL) {
                while (bytesWritten < bufLen) {
                    dataOut[bytesWritten] = SPI_Exchange8bit(DUMMY_DATA);

                    bytesWritten++;
                }
            }
        }
    }

    return bytesWritten;
}

bool SPI_IsBufferFull(void) {
    return (SSPSTATbits.BF);
}

bool SPI_HasWriteCollisionOccured(void) {
    return (SSPCON1bits.WCOL);
}

void SPI_ClearWriteCollisionStatus(void) {
    SSPCON1bits.WCOL = 0;
}
/**
 End of File
 */