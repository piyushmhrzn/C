/*
===========================================================================
Name: C1_Functions_Banks.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

//global variables
float accountBalance,amount;

//prototype declaration
void initializeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float amount);
void addGift(float giftAmount);
void thankYou(void);

int main()
{
    int transactionCounter=0;
    initializeAccount();
    getBalance();
    //Perform First Transaction
    askCustomer();
    updateAccount(amount);
    getBalance();
    //Perform Second Transaction
    askCustomer();
    updateAccount(amount);
    addGift(25.0);
    getBalance();
    //Perform Third Transaction
    askCustomer();
    updateAccount(amount);
    addGift(50.0);
    getBalance();
    thankYou();

    return 0;
}

void initializeAccount()
{
    accountBalance = 0.0;
}

void getBalance(void)
{
    printf("\nThe current balance in the account is $%.2f\n",accountBalance);
}

void askCustomer(void)
{
    printf("Next transaction .......\n");
    printf("Enter amount to debit or credit: ");
    scanf("%f",&amount);
}

void updateAccount(float amount)
{
    accountBalance += amount;
    printf("The account was updated with $%.2f\n",amount);
}

void addGift(float giftAmount)
{
    accountBalance += giftAmount;
    printf("Congratulation! A gift of $%.2f has been added to your Account\n",giftAmount);
}

void thankYou(void)
{
    printf("----------Thank You for your Service!!!----------\n");
}

