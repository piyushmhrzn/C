/*
===========================================================================
Name: C1_Functions_Recursion.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

void recursiveHalf(int x,float y);

int main()
{
    recursiveHalf(1,100);
}

void recursiveHalf(int x,float y)
{
    printf("x:%d and Value: %f\n",x,y);

    if(x<10)
    {
        recursiveHalf((x+1),(y/2));
    }
}

