/*
===========================================================================
Name: C24_Conditional_Directives.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include "C24_Conditional_Directives.h"

#undef MAX_PRICE
#define MAX_PRICE 100

#ifndef THRESHOLD
    #define THRESHOLD 23.751
#endif // THRESHOLD

#define greet(name) \
        printf("Thank you for shopping here, " #name  "\n\n");

int main(void)
{
    printf("MAX_PRICE = %d\n", MAX_PRICE);
    printf("THRESHOLD = %f\n", THRESHOLD);

    greet(Piyush);

    //predefined macros in C
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);

    return EXIT_SUCCESS;
}
