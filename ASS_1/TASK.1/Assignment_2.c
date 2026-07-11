#include <stdio.h>
#include "class.h"

void scanarray(uint8_t arr[], uint8_t size)
{
    register uint8_t i;
    for (uint8_t i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]);
    }
}

void displayarray(uint8_t arr[], uint8_t size)
{
    register uint8_t i;
    for (uint8_t i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }

    printf("\n");
}