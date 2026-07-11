#include <stdio.h>
#include "task8.h"
#include "stdint.h"
int main() {
    register uint8_t i;
    uint8_t arr1[] = {1, 2, 3, 4, 5};
    char arr2[] = {'a', 'b', 'c', 'd', 'e'};

    uint8_t size1 = sizeof(arr1) / sizeof(arr1[0]);
    uint8_t size2 = sizeof(arr2) / sizeof(arr2[0]);

    reverseIntArray(arr1, size1);
    reverseCharArray(arr2, size2);

    displayReversedArrays(arr1, size1);
    displayReversedCharArrays(arr2, size2);

    return 0;
}