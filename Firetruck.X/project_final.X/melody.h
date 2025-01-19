#ifndef MELODY_H
#define	MELODY_H

// Melody definitions
//const int melody1[24][3] = {
//    {238, 200, 20}, {189, 200, 20}, {158, 200, 20}, {118, 200, 20},
//    {94, 200, 20},  {79, 600, 50},  {94, 600, 50},  {238, 200, 20},
//    {200, 200, 20}, {149, 200, 20}, {118, 200, 20}, {99, 200, 20},
//    {74, 600, 50},  {99, 600, 50},  {212, 200, 20}, {178, 200, 20},
//    {133, 200, 20}, {105, 200, 20}, {88, 200, 20},  {66, 600, 40},
//    {66, 200, 40},  {66, 200, 40},  {66, 200, 40},  {59, 1200, 100}
//};

const int melody2[16][3] = {
    {200, 300, 30}, {150, 300, 30}, {100, 300, 30}, {50, 300, 30},
    {238, 300, 30}, {189, 300, 30}, {158, 300, 30}, {118, 300, 30},
    {200, 300, 30}, {150, 300, 30}, {100, 300, 30}, {50, 300, 30},
    {238, 300, 30}, {189, 300, 30}, {158, 300, 30}, {118, 300, 30}
};

//const int rick_roll[50][3] = {
//    {141 ,125 , 20},
//    {126 ,125 , 20},
//    {105 ,125 , 20},
//    {126 ,125 , 20},
//    {83 ,375 , 50},
//    {83 ,375 , 50},
//    {95 ,750 , 75},
//    
//    {141 ,125 , 20},
//    {126 ,125 , 20},
//    {105 ,125 , 20},
//    {126 ,125 , 20},
//    {95 ,375 , 50},
//    {95 ,375 , 50},
//    {105 ,750 , 75},
//    
//    {141 ,125 , 20},
//    {126 ,125 , 20},
//    {105 ,125 , 20},
//    {126 ,125 , 20},
//    {105 ,750 , 75},
//    {95 ,250 , 35},
//    {111 ,375 , 50},
//    {126 ,125 , 20},
//    {141 ,500 , 565},
//    {95 ,250 , 35},
//    {105 ,250 , 535},
//    
//    {141 ,125 , 20},
//    {126 ,125 , 20},
//    {105 ,125 , 20},
//    {126 ,125 , 20},
//    {83 ,375 , 50},
//    {83 ,375 , 50},
//    {95 ,750 , 75},
//
//    {141 ,125 , 20},
//    {126 ,125 , 20},
//    {105 ,125 , 20},
//    {126 ,125 , 20},
//    {69 ,500 , 65},
//    {111 ,125 , 20},
//    {105 ,500 , 565},
//    
//    {141 ,125 , 20},
//    {126 ,125 , 20},
//    {105 ,125 , 20},
//    {126 ,125 , 20},
//    {105 ,750 , 75},
//    {95 ,250 , 35},
//    {111 ,375 , 50},
//    {126 ,125 , 20},
//    {141 ,500 , 565},
//    {95 ,250 , 35},
//    {105 ,250 , 565}
//};


const int rick_roll[50][3] = {
    {141 ,20 ,125},
    {126 ,20 ,125},
    {105 ,20 ,125},
    {126 ,20 ,375},
    {83 ,50 ,375},
    {83 ,50 ,750},
    {95 ,75 ,125},
    
    {141 ,20 ,125},
    {126 ,20 ,125},
    {105 ,20 ,125},
    {126 ,20 ,375},
    {95 ,50 ,375},
    {95 ,50 ,750},
    {105 ,75 ,125},
    
    {141 ,20 ,125},
    {126 ,20 ,125},
    {105 ,20 ,125},
    {126 ,20 ,750},
    {105 ,75 ,250},
    {95 ,35 ,375},
    {111 ,50 ,125},
    {126 ,20 ,500},
    {141 ,150 ,500},
    {95 ,35 ,250},
    {105 ,535 ,125},
    
    {141 ,20 ,125},
    {126 ,20 ,125},
    {105 ,20 ,125},
    {126 ,20 ,375},
    {83 ,50 ,375},
    {83 ,50 ,750},
    {95 ,75 ,125},
    
    {141 ,20 ,125},
    {126 ,20 ,125},
    {105 ,20 ,125},
    {126 ,20 ,500},
    {69 ,65 ,250},
    {111 ,20 ,500},
    {105 ,565 ,125},
    
    {141 ,20 ,125},
    {126 ,20 ,125},
    {105 ,20 ,125},
    {126 ,20 ,750},
    {105 ,75 ,250},
    {95 ,35 ,375},
    {111 ,50 ,125},
    {126 ,20 ,500},
    {141 ,150 ,500},
    {95 ,35 ,250},
    {105 ,565 ,125} // Last note takes the first note's pause time
};

const int fur_elise[71][3] = {
    {46, 75, 250},
    {49, 75, 250},
    {46, 75, 250},
    {49, 75, 250},
    {46, 75, 250},
    {62, 75, 250},
    {52, 75, 250},
    {59, 75, 250},
    {70, 75, 250},
    {189, 75, 250},
    {141, 75, 250},
    {118, 75, 250},
    {94, 75, 250},
    {70, 75, 250},
    {62, 75, 250},
    {189, 75, 250},
    {126, 75, 250},
    {94, 75, 250},
    {74, 75, 250},
    {62, 75, 250},
    {59, 75, 250},
    {189, 75, 250},
    {141, 75, 250},
    {94, 75, 250},
    
    {46, 75, 250},
    {49, 75, 250},
    {46, 75, 250},
    {49, 75, 250},
    {46, 75, 250},
    {62, 75, 250},
    {52, 75, 250},
    {59, 75, 250},
    {70, 75, 250},
    {189, 75, 250},
    {141, 75, 250},
    {118, 75, 250},
    {94, 75, 250},
    {70, 75, 250},
    {62, 75, 250},
    {189, 75, 250},
    {126, 75, 250},
    {94, 75, 250},
    {74, 75, 250},
    {62, 75, 250},
    {59, 75, 250},
    {189, 75, 250},
    {141, 75, 250},
    {94, 75, 250},
    
    {46, 75, 250},
    {49, 75, 250},
    {46, 75, 250},
    {49, 75, 250},
    {46, 75, 250},
    {62, 75, 250},
    {52, 75, 250},
    {59, 75, 250},
    {70, 75, 250},
    {189, 75, 250},
    {141, 75, 250},
    {118, 75, 250},
    {94, 75, 250},
    {70, 75, 250},
    {62, 75, 250},
    {189, 75, 250},
    {126, 75, 250},
    {94, 75, 250},
    {59, 75, 250},
    {62, 75, 250},
    {70, 75, 250},
    {189, 75, 250},
    {141, 75, 250}
};


//const int deja_vu[25][3] = {
//    {118, 60, 225},
//    {105, 60, 300},
//    {99, 150, 250},
//    {99, 35, 250},
//    {99, 35, 250},
//    {105, 35, 250},
//    {133, 35, 250},
//    {158, 35, 250},
//    {133, 150, 300},
//    {118, 35, 250},
//    {118, 230, 250},
//    {118, 35, 250},
//    {88, 35, 250},
//    {99, 35, 250},
//    {105, 35, 250},
//    {99, 120, 250},
//    {99, 35, 250},
//    {99, 35, 250},
//    {88, 35, 250},
//    {99, 35, 250},
//    {88, 35, 250},
//    {88, 150, 250},
//    {79, 35, 250},
//    {79, 35, 250},
//    {88, 200, 225}
//};
const int deja_vu[25][3] = {
    {118, 40, 150},
    {105, 40, 200},
    {99, 120, 166},
    {99, 23, 166},
    {99, 23, 166},
    {105, 23, 166},
    {133, 23, 166},
    {158, 23, 166},
    {133, 100, 200},
    {118, 23, 166},
    {118, 153, 166},
    {118, 23, 166},
    {88, 23, 166},
    {99, 23, 166},
    {105, 23, 166},
    {99, 120, 166},
    {99, 23, 166},
    {99, 23, 166},
    {88, 23, 166},
    {99, 23, 166},
    {88, 23, 166},
    {88, 100, 166},
    {79, 23, 166},
    {79, 23, 166},
    {88, 133, 150}
};


// Store all melodies in a pointer array
const int* melodies[] = { (int*)rick_roll, (int*)deja_vu, (int*)fur_elise};
const int melody_lengths[] = {50 ,25, 71}; // Length of each melody
const int total_songs = 3;               // Number of songs

#endif	/* MELODY_H */

