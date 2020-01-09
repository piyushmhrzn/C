/*
===========================================================================
Name: C14_Pointer.c
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
    int i;
    float mpgData[] = {18.5,16.2,32.0,40.0,24.5,31.2,16.8,22.1,12.5,35.5} ;
    float *ptr = mpgData;

    printf("At location [%x] contains %.2f\n",ptr,*ptr);
    ptr++;
    ptr++;
    printf("At location [%x] contains %.2f\n",ptr,*ptr);
    ptr--;
    printf("At location [%x] contains %.2f\n",ptr,*ptr);
    printf("Continue from 2nd address pointed\n");
    printf("-------------------------------------\n");

    int num = sizeof(mpgData)/sizeof(float);

    for(i=0; i<num; i++)
    {
        printf("Address [%x] contains [%.2f]\n",ptr,*ptr);
        ptr++;
    }
    */

    //Dynamic arrays saves memory by creating a pointer that stores
    //the beginning of the array
    int *dynamicArray = malloc(20*sizeof(int));
    *dynamicArray = 10;
    printf("Address [%x] stores value %d\n",dynamicArray,*dynamicArray);

    dynamicArray[1] = 30;
    dynamicArray[2] = 55;
    int num = sizeof(dynamicArray);
    printf("dynamicArray[1] stores value %d\n",dynamicArray[1]);
    printf("dynamicArray[2] stores value %d\n",dynamicArray[2]);
    printf("The size of dynamicArray is %d\n",num);

    free(dynamicArray);    //Release UNUSED Memory

    return 0;
}
