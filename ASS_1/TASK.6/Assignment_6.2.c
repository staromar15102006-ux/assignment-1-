#include <stdio.h>
#include "task6.h"
#include <stdint.h>
#define SIZE 5

int main() {
    register uint8_t i;
    char arr[SIZE] = {'a', 'b', 'c', 'd', 'e'};
    uint8_t size = SIZE;
    uint8_t max = getmax(arr, size);

    printf("The maximum character in the array is: %c\n", max);
    return 0;
}