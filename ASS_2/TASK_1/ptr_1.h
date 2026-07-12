#ifndef ASSI1_H
#define ASSI1_H
#include "stdint.h"
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
#define DEPOSIT 1
#define WITHDRAW 2
#define CHECK_BALANCE 3
#define EXIT 4
extern u32 transactioncount;

void processTransaction (u32 *Balance, u8 type);

#endif 