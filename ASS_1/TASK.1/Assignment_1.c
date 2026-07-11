#include <stdio.h>
#include "class.h"

int main()
{
    uint8_t arr[SIZE] = {0};
    uint8_t size = SIZE;

    printf("Enter the elements of the array:\n");
    scanarray(arr, size);

    printf("The elements of the array are:\n");
    displayarray(arr, size);

    return 0;
}