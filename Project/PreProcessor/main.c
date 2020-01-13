 /*
===========================================================================
Name: main.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

#include "C24_myLibrary.h"
#include "C24_myMacros.h"

int main()
{
    float x;
    x = volumeSphere(5);
    printf("The volume of a sphere with radius '5' = %f\n",x);

    int list[] = {NUMBERS};
    printf("The 4th element in list is %d\n",list[3]);

	return EXIT_SUCCESS;
}
