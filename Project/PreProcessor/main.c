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
    printf("Enter the radius for the sphere(cm): ");
    scanf("%f",&x);

    printf("The volume of a sphere with radius %.3f  cm= [%.3f ] cubic cm.\n",x,volumeSphere(x));

    int list[] = {NUMBERS};
    int num = sizeof(list)/sizeof(int);

    printf("\nThe 4th element in the list from MACRO Functions is [%d]\n",list[3]);
    printf("The greatest number in the macros is [%d]\n",greatestNumber(list,num));

	return EXIT_SUCCESS;
}
