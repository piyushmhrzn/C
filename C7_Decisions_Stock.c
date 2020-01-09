/*
===========================================================================
Name: C7_Decisions_Stock.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

//Constant Definitions
#define SELL_PRICE 54.2
#define BUY_PRICE 28.5

//Function Prototype
float askStockValue(void);
void makeDecision(float value);
void handleTransaction(char action);

int main()
{
    float value = askStockValue();
    makeDecision(value);
    return EXIT_SUCCESS;
}

//Function Definitions
float askStockValue(void)
{
    float stock;
    printf("Enter the current stock value?: ");
    scanf("%f",&stock);
    return stock;
}

void makeDecision(float value)
{
    //nested if-statements are good when choices are within particular range

    if(value <=  BUY_PRICE)
    {
        handleTransaction('b');
    }
    else if(value >= SELL_PRICE)
    {
        handleTransaction('s');
    }
    else{
        handleTransaction('h');
    }
}

void handleTransaction(char action)
{
    //switches are good when choices are matching exact values

    switch(action)
    {
        case 'b':
            printf("I suggest you to buy more of this stock.\n");
            break;

        case 's':
            printf("I suggest you to sell this stock.\n");
            break;

        case 'h':
            printf("Let's wait and see what the market is doing.\n");
            break;

        default:
            printf("Sorry, I cannot provide any advice at this time.\n");
    }
}

