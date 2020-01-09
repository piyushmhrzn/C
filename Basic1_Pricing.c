/*
===========================================================================
Name: Basic1_Pricing.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
        int a=5;
        int b=-3;
        int result;

        printf("a before: %d\n",a);
        result = (++a)*b;               //a is incremented first and then multiplied
        printf("result: %d\n",result);
        printf("a after: %d\n",a);

        a = 5;                         //reset a to original value
        printf("a before: %d\n",a);
        result = (a++)*b;              //a is multiplied first and then incremented
        printf("result: %d\n",result);
        printf("a after: %d\n",a);
    */

    //Variable declaration and initialization
    double originalPrice = 0.0;
    double tax = 0.0;
    double discount = 0.0;
    double specialPrice = 0.0;

    printf("Enter the original price: ");
    scanf("%lf",&originalPrice);

    printf("Enter tax percentage: ");
    scanf("%lf",&tax);

    printf("Enter discount percentage: ");
    scanf("%lf",&discount);

    double afterTax = originalPrice*(1.0 + tax/100.0);
    double theDiscount = originalPrice*(discount/100.0);
    specialPrice = afterTax - theDiscount;

    printf("-----------------------------------------------\n");
    printf("After applying tax first and then the discount:\n");
    printf("-----------------------------------------------\n");

    printf("The original price is: $%.2lf\n",originalPrice);
    printf("The price after tax is: $%.2lf\n",afterTax);
    printf("The discount amount is $%.2lf\n",theDiscount);
    printf("Your special price is: $%.2lf\n",specialPrice);

    return 0;
}

