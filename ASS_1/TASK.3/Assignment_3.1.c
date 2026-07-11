#include <stdio.h>
#include "task3.1.h"
#include "stdint.h"

uint8_t arr[] = {10, 3, 7, 25, 14};
int main() {
    register uint8_t size = sizeof(arr) / sizeof(arr[0]);
    uint8_t max = getmax(arr, size);
    printf("The maximum value in the array is: %u\n", max);
    
    return 0;
}