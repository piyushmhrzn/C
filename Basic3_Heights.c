/*
===========================================================================
Name: Basic3_Heights.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
      /*
        //Conversion of temperature from Celsius to Fahrenheit
        float c,f;
        printf("Enter the temperature in Celsius: ");
        scanf("%f",&c);

        f = c*(9/5) + 32;
        printf("The temperature in Fahrenheit is %.1f\n",f);
    */

    float cm,inches,remain;
    int feet;
    printf("Enter your height in cm: ");
    scanf("%f",&cm);

    inches = cm/2.54;
    feet = inches/12;
    remain = inches - (feet * 12);

    printf("You are -->>%d feet and %.2f inches<<-- tall",feet,remain);
}
