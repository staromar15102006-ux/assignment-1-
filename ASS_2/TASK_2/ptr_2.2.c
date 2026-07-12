#include <stdio.h>
#include <stdint.h>
#include "ass2.h"


int main(){
char word[100]={0};
u32 vowels=0;
printf("Enter your word master : ");
scanf(" %s " , &word);

modifystring (word , &vowels);
printf(" the string: %s\n,word ");
printf("vowelcount :%u \n", vowels);

    return 0;
}