#include<stdio.h>
#include<stdlib.h>

//global variables
float accountBalance,amount;

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
