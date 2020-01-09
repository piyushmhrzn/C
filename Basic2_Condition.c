/*
===========================================================================
Name: Basic2_Condition.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

//External Functions
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int weather,bike,car,mood,decision;

    printf("How is the weather? 1:good and 0:bad\n");
    scanf("%d",&weather);

    printf("Bike? 1:yes and 0:no\n");
    scanf("%d",&bike);

    printf("Car? 1:yes and 0:no\n");
    scanf("%d",&car);

    printf("How is the mood? 1:fine and 0:not fine\n");
    scanf("%d",&mood);

    decision = (weather && (car || bike) && mood);

    if(decision==1)
    {
        printf("Let's GO");
    }
    else{
        printf("Abandoned");
    }

    return 0;
}
