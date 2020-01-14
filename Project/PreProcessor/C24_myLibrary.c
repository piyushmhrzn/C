 /*
===========================================================================
Name: C24_myLibrary.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<math.h>

double areaTrapezoid(double Base, double base, double height)
{
    return (Base + base)*height/2;
}

float volumeSphere(float r)
{
    return (4.0/3.0)*M_PI*pow(r,2);
}

int greatestNumber(int arr[], int num)
{
    int i,max,temp;
    max = arr[0];

    for(i=0; i<num; i++)
    {
        if(arr[i]>max)
        {
           max =arr[i];
        }
    }
    return max;
}

