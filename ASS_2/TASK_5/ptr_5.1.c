#include<stdio.h>
#include "assi5.h"


u32 power(u32 base, u32 exponent) {
    if(exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

u32 sumDigits(u32 n) {
    if(n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}