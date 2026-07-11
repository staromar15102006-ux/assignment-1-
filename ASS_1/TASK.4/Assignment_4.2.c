#include <stdio.h>
#include "stdint.h"
#define Size 10
uint8_t getrepeat(uint8_t arr[], uint8_t size, uint8_t target) {
    uint8_t count = 0;
    register uint8_t i;
    for (register uint8_t i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    register uint8_t i;
    uint8_t arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    uint8_t size = Size;
    
    uint8_t repeatCount = getrepeat(arr, size, 2);
    printf("Number of repeated elements: %u\n", repeatCount);
    
    return 0;
}