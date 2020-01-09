#include<stdio.h>
#include<stdlib.h>

#ifndef C4_TRANSACTION_H_
#define C4_TRANSACTION_H_

//global variables
float accountBalance,amount;

//prototype declaration
void initializeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float amount);
void addGift(float giftAmount);
void thankYou(void);

#endif // C4_TRANSACTION_H

