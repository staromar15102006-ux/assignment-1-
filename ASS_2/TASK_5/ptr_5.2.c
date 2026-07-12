#include <stdio.h>
#include "assi5.h"

int main() {
    u32 base=0;
    u32 exponent=0;
    u32 number=0;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &base, &exponent);
    printf(" %d^%d = %d\n", base, exponent, power(base, exponent));

    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Sum of digits = %d\n", sumDigits(number));

    return 0;
}