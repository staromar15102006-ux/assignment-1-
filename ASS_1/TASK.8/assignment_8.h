#ifndef TASK8_H
#define TASK8_H
#include "stdint.h"
#define SIZE 5

extern uint8_t arr1[SIZE];
extern char arr2[SIZE];

void reverseIntArray(uint8_t arr[], uint8_t size);
void reverseCharArray(char arr[], uint8_t size);

void displayReversedArrays(uint8_t arr1[], uint8_t size);
void displayReversedCharArrays(char arr2[], uint8_t size);

#endif 