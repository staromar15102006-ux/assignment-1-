#include <stdio.h>
#include "task7.h"
#include <stdint.h>
int main() {
    register uint8_t i;
    char arr1[]={'a','b','c','d','e'};
    uint8_t arr2[TASK7_SIZE];
    convertchartoint(arr1, arr2, TASK7_SIZE);

    printf("The converted integer array is: ");
    for (uint8_t i = 0; i < TASK7_SIZE; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}