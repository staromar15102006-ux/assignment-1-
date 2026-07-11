#include <stdio.h>
#include "stdint.h"
#define SIZE 7

uint8_t bubbleSort(uint8_t arr[], uint8_t size) {
    register uint8_t i, j;
    for (uint8_t i = 0; i < size - 1; i++) {
        for (uint8_t j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                uint8_t temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

int main() {
    register uint8_t i;
    uint8_t arr[SIZE] = {64, 34, 25, 12, 22, 11, 90};
    uint8_t size = SIZE;

    bubbleSort(arr, size);

    printf("Sorted array: \n");
    for (uint8_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    uint8_t max = getmax(arr, size);
    printf("Maximum element: %d", max);
    
    return 0;
}