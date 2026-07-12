#include <stdio.h>
#include <stdint.h>
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
#define DEPOSIT 1
#define WITHDRAW 2
#define CHECK_BALANCE 3
#define EXIT 4

void processTransaction (u32 *Balance, u8 type){
    static u32 transactioncount = 0;
u32 counter = 0;
register u32 *tempBalance = Balance;
u16 amount;
u8 choice;
do{
    switch(type){
        case DEPOSIT: 
            printf("Enter the amount to deposit: ");
            scanf("%u", &amount);
            *tempBalance += amount;
            printf("Deposit: %u\n", *tempBalance);
            break;
        case WITHDRAW: 
            printf("Enter the amount to withdraw: ");
            scanf("%u", &amount);   
            if(amount > *tempBalance){
                printf("ERROR: Insufficient balance for withdrawal.\n");
                break;
            }   
            *tempBalance -= amount;
            printf("Withdraw: %u\n", *tempBalance);
            break;
        case CHECK_BALANCE: 
            printf("Check Balance: %u\n", *tempBalance);
            break;
        case EXIT: 
            printf("Exiting the transaction process.\n");
            break;

        default:
            break;
    }
    counter++;
}
while(choice != 'e' && choice != 'E');


}