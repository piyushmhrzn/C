/*
===========================================================================
Name: C4_transaction.h
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

#ifndef C4_TRANSACTION_H_INCLUDED
#define C4_TRANSACTION_H_INCLUDED

//global variables
float accountBalance,amount;

//prototype declaration
void initializeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float amount);
void addGift(float giftAmount);
void thankYou(void);

#endif // C4_TRANSACTION_H_INCLUDED
