#include <stdio.h>
#include "task7.h"

void convertchartoint(char arr1[], uint8_t arr2[], uint8_t len) {
    for (uint8_t i = 0; i < len; i++) {
        arr2[i] = (uint8_t)arr1[i];
    }
}