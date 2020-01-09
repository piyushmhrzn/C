/*
===========================================================================
Name: C10_Array_ElementAccessing.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

#define NUMBERS_OF_CLASSROOMS 20

//Function Prototypes
void printArray(char dataName[],int dataSet[],int dataLength);

int main()
{
    int classrooms[NUMBERS_OF_CLASSROOMS] = {15, 18, 10, 23, 15};

    classrooms[3] +=2;    //classroom[3] was 23, now 25
    printf("The 5th element is %d\n\n",classrooms[4]);

    printArray("classrooms",classrooms,NUMBERS_OF_CLASSROOMS);

    return EXIT_SUCCESS;
}

void printArray(char dataName[],int dataSet[],int dataLength)
{
    int i;
    for(i=0; i<NUMBERS_OF_CLASSROOMS; i++)
    {
        printf("%s[%d]: %d\n",dataName,i,dataSet[i]);
    }
}
