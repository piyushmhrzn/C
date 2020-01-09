/*
===========================================================================
Name: C6_Decisions_CompareNumbers.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

int getNumber(void);
void justRight(void);
void checkError(int num);
void tooSmall(void);
void tooLarge(void);


int main()
{
    int num = getNumber();

    if((num>0) && (num<100))
    {
        justRight();
    }
    else{
        checkError(num);
    }

    return EXIT_SUCCESS;
}

int getNumber(void)
{
    int n;
    printf("Enter any number between 0 and 100: ");
    scanf("%d",&n);
    return n;
}

void justRight(void)
{
    printf("The entered number is within range\n");
}

void checkError(int num)
{
    if(num<1)
    {
        tooSmall();
    }
    else{
        tooLarge();
    }
}

void tooSmall(void)
{
    printf("Entered number is too small\n");
}

void tooLarge(void)
{
    printf("Entered number is too large\n");
}
