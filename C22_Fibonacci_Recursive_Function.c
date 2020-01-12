/*
===========================================================================
Name: C22_Fibonacci_Recursive_Function.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

int Fibonacci(int n)
{
    if(n == 0)
            return 0;
    else if(n == 1)
            return 1;
    else
            return Fibonacci(n-1) + Fibonacci(n-2);
}

void generateFibonacci(int numbers)
{
     int i,n=0;
     for(i=0;  i<numbers;  i++)
     {
         printf("[%2d]: %5d\n",n,Fibonacci(n));
         n++;
     }
}

int main(void)
{
    generateFibonacci(25);
    return EXIT_SUCCESS;
}


