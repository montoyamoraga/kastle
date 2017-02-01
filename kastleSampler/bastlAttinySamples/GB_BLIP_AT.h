#ifndef GB_BLIP_H_
#define GB_BLIP_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define GB_BLIP_NUM_CELLS 1061
#define GB_BLIP_SAMPLERATE 16384
 
const char __attribute__((section(".progmem.data"))) GB_BLIP_DATA [] = {-10,
-19, -21, -25, -28, -31, -34, -38, -41, -44, -47, -49, -53, -54, -56, -58, -59,
-60, -61, -62, -61, -62, -59, -55, -56, -59, -57, -56, -55, -54, -52, -51, -49,
-48, -47, -45, -45, -43, -42, -41, -40, -38, -38, -36, -36, -34, -34, -33, -25,
-23, -23, -22, -22, -20, -19, -19, -20, -18, -18, -17, -17, -16, -16, -16, -15,
-14, -14, -13, -12, -13, -12, -11, -11, -11, -10, -10, -10, -9, -8, -6, -8, -8,
-7, -7, -7, -6, -4, -6, -6, -5, -5, -5, -5, -4, -4, -4, -3, -3, -3, -3, -2, -3,
-2, -2, -2, -1, -1, -1, -1, -1, 0, 2, 0, 0, 0, 1, 0, 1, 3, 1, 1, 1, 1, 1, 1, 2,
2, 1, 2, 2, 2, 3, 3, 2, 3, 2, 3, 3, 3, 3, 3, 3, 4, 6, 4, 4, 4, 4, 4, 4, 6, 4, 3,
4, 4, 4, 4, 5, 4, 5, 13, 9, 4, 5, 4, 5, 5, 4, 5, 6, 5, 5, 5, 6, 4, 5, 11, 16,
14, 13, 13, 13, 15, 12, 12, 12, 12, 12, 12, 12, 12, 11, 12, 11, 11, 11, 11, 10,
11, 11, 11, 11, 11, 10, 10, 10, 10, 12, 10, 9, 9, 10, 9, 10, 11, 9, 8, 9, 9, 9,
8, 9, 9, 8, 9, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 7, 8, 8, 10, 8, 8, 7, 8, 8, 8,
10, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 7, 7, 7, 7, 7, 7, 6, 7, 7, 9,
7, 7, 7, 7, 7, 7, 9, 7, 6, 6, 6, 6, 6, 7, 6, 6, 7, 6, 6, 7, 6, 6, 6, 7, 6, 15,
13, 6, 7, 6, 6, 5, 15, 19, 16, 15, 15, 15, 16, 14, 13, 14, 13, 13, 13, 13, 13,
12, 13, 12, 12, 12, 13, 10, 9, 11, 11, 11, 11, 11, 10, 10, 11, 13, 10, 10, 10,
10, 10, 10, 12, 9, 8, 9, 9, 9, 8, 9, 9, 7, 8, 8, 8, 8, 8, 7, 8, 8, 7, 7, 8, 7,
6, 7, 8, 10, 7, 7, 7, 7, 7, 7, 9, 7, 6, 6, 6, 6, 6, 7, 7, 6, 6, 6, 6, 6, 6, 5,
6, 6, 6, 6, 6, 6, 5, 6, 8, 8, 5, 6, 6, 6, 5, 6, 8, 6, 5, 5, 5, 5, 5, 6, 5, 5, 5,
5, 5, 5, 5, 4, 4, 5, 5, 5, 6, 5, 4, 5, 7, 7, 14, 17, 24, 26, 15, 16, 17, 15, 13,
14, 14, 14, 13, 13, 13, 12, 12, 12, 11, 12, 11, 11, 11, 11, 10, 10, 11, 10, 9,
10, 12, 11, 9, 9, 9, 9, 9, 9, 11, 8, 7, 8, 8, 8, 7, 8, 8, 7, 7, 7, 7, 7, 7, 6,
6, 7, 6, 6, 7, 6, 5, 6, 8, 8, 5, 6, 6, 6, 6, 6, 8, 5, 4, 5, 5, 5, 5, 5, 5, 4, 5,
5, 4, 5, 5, 4, 4, 5, 4, 4, 5, 4, 4, 4, 7, 7, 4, 4, 4, 5, 4, 5, 7, 4, 3, 4, 4, 4,
3, 4, 4, 3, 4, 4, 3, 4, 4, 3, 3, 4, 3, 4, 4, 3, 2, 3, 6, 5, 14, 18, 18, 18, 16,
18, 18, 15, 13, 15, 12, 22, 26, 14, 12, 12, 12, 11, 12, 11, 11, 11, 11, 10, 10,
10, 9, 9, 9, 9, 8, 8, 10, 11, 9, 10, 7, 8, 10, 7, 6, 7, 7, 7, 6, 7, 6, 5, 6, 6,
5, 6, 6, 4, 8, 5, 5, 5, 5, 5, 4, 5, 7, 7, 3, 5, 4, 5, 4, 5, 7, 4, 3, 4, 3, 3, 3,
4, 4, 2, 3, 3, 3, 3, 4, 2, 3, 3, 3, 3, 3, 2, 2, 3, 5, 6, 2, 3, 2, 3, 2, 3, 6, 3,
1, 2, 2, 2, 2, 3, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 0, 2, 4, 5, 12, 19,
16, 18, 16, 17, 19, 15, 14, 14, 14, 14, 13, 13, 13, 11, 13, 11, 12, 10, 18, 27,
14, 9, 10, 9, 9, 9, 10, 9, 8, 8, 10, 11, 7, 7, 7, 7, 10, 6, 5, 6, 6, 6, 5, 6, 5,
4, 5, 5, 4, 5, 5, 3, 4, 4, 4, 4, 4, 3, 2, 3, 6, 6, 2, 3, 3, 4, 3, 4, 6, 3, 1, 2,
2, 2, 1, 2, 2, 0, 2, 1, 1, 2, 2, 0, 1, 1, 1, 1, 2, 1, 0, 1, 4, 4, 0, 1, 1, 1, 1,
1, 5, 1, -1, 1, 0, 1, 0, 1, 1, -1, 0, 0, 0, 1, 1, 0, 2, 1, -1, 1, 0, 0, -2, 0,
3, 2, 16, 20, 19, 20, 18, 19, 21, 17, 14, 16, 15, 15, 13, 15, 14, 12, 13, 13,
12, 12, 12, 10, 10, 11, 9, 10, 10, 10, 7, 13, 28, 14, 10, 12, 6, 7, 6, 8, 11, 7,
4, 6, 5, 5, 4, 5, 5, 3, 4, 4, 3, 4, 4, 2, 3, 3, 2, 3, 3, 2, 1, 2, 6, 6, 1, 2, 2,
2, 1, 2, 6, 1, -1, 1, 1, 1, 0, 1, 1, -1, 0, 0, 0, 0, 1, -1, -1, 0, -1, -1, 0,
-1, -2, -1, 3, 3, -2, -1, -1, 0, -1, 0, 3, -1, -3, -1, -2, -1, -2, -1, -1, -3,
-1, -2, -2, -1, -1, -3, -2, -2, -2, -2, -1, -2, -3, -2, 2, 1, 15, 27, 22, 25,
21, 23, 25, 21, 18, 19, 18, 18, 17, 17, 17, 14, 16, 14, 14, 14, 14, 12, 12, 12,
11, 11, 12, 10, 9, 10, 13, 13, 8, 9, 8, 9, 8, 8, 11, 7, 5, 6, 6, 6, 5, 6, 6, 4,
5, 4, 4, 4, 5, 2, 3, 3, 2, 2, 3, 2, 0, 2, 3, 7, 2, 0, 1, 1, 1, 1, 6, 0, -1, 0,
-2, 1, 0, -1, -2, 0, -2, -1, 0, -1, -3, -1, -2, -2, -1, -1, -2, -3, -1, -3, -2,
-1, -1, -3, -2, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, -1, 1, -13, -14, -5, -5,
-1, -2, };
const char* sampleTable = GB_BLIP_DATA;
const uint16_t sampleLength = GB_BLIP_NUM_CELLS;
#endif /* GB_BLIP_H_ */
