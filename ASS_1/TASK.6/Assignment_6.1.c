#include <stdint.h>

char getmax(char arr[], uint8_t size) {
    char max = arr[0];
    for (uint8_t i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}