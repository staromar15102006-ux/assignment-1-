#include <stdio.h>
#include <stdint.h>
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

int main() {
    register u32 balance = 0;
u32 transactioncount = 0;
u8 type=0;
u16 choice;
do{
printf("\n=====ATM MENU===== : ");
printf(" 1. Deposit\n");
printf(" 2. Withdraw\n");
printf(" 3. Check Balance\n");
printf(" 4. Exit\n");
printf("Enter your choice: ");
scanf("%u", &choice);
processTransaction(&balance, type);
printf("Final Balance: %u\n", balance);
} 
while(choice != 'e' && choice != 'E');


    return 0;
}