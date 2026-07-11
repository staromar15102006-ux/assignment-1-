#include <stdio.h>
#include "task8.h"
#include "stdint.h"

void reverseIntArray(uint8_t arr[], uint8_t size) {
    register uint8_t i;
    for (uint8_t i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverseCharArray(char arr[], uint8_t size) {
    register uint8_t i;
    for (uint8_t i = size - 1; i >= 0; i--) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}