/*
===========================================================================
Name: C23_Preprocessor.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

//Object-like macros
#define NUMBERS 1,2,3

//Function-like macros
#define max(X, Y) ((X) > (Y) ? (X) : (Y))

int main(void)
{
    int list[] = {NUMBERS};

    int *p, *q, n;
    int val1 = 5, val2 = 12;
    p = &val1;                          //p points to the address of value 5
    q = &val2;
    n=1;

    int x = max(p, q);
    int y = max(12, 5);
    int z = max(n+5, *p);

    printf("x = [%x] since p = %x and q = %x\n",x,p,q);         //"%x"  used to print address
    printf("y = [%d]\n",y);
    printf("z = [%d] since n+5 = %d and *p = %x",z,(n+5),*p);  //p with (*) is 5

    return EXIT_SUCCESS;
}
