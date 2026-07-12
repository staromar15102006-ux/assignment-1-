#include <stdio.h>
#include "ass2.h"


void modifystring(char *str, u32 *vowelcount){
    *vowelcount = 0;

    while (*str != '\0'){
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E'
            || *str == 'I' || *str == 'O' || *str == 'U'){
            (*vowelcount)++;
        }

        if (*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        str++;
    }
}