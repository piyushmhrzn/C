/*
===========================================================================
Name: C12_Array_SearchingSorting.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

//Function Prototypes
void searchHighMPG(float value,float dataSet[],int len);
void printArray(char dataName[],float dataSet[],int dataLength);
void bubbleSort(float dataSet[],int length);

int main()
{
    //Data set of MPG ratings of 10 cars
    float mpgData[10] = {18.5,16.2,32.0,40.0,24.5,31.2,16.8,22.1,12.5,35.5} ;

    //searchHighMPG(30.0,mpgData,10);
    bubbleSort(mpgData,10);

    return 0;
}

void searchHighMPG(float value,float dataSet[],int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        if(dataSet[i]>value)
        {
            printf("Car [%d] has MPG : %.1f\n",i,dataSet[i]);
        }
    }
}

void printArray(char dataName[],float dataSet[],int dataLength)
{
    int i;
    for(i=0; i<dataLength; i++)
    {
        printf("%s[%d]: %.1f\n",dataName,i,dataSet[i]);
    }
}
void bubbleSort(float dataSet[],int length)
{
    int i,swap,counter=0;
    float temp;
    do{
        printf("\n==>DO-WHILE-LOOP CYCLE ----: %d\n",counter++);
        swap=FALSE;
        for(i=1; i<length; i++)
        {
            if(dataSet[i-1] > dataSet[i])
            {
                temp = dataSet[i-1];
                dataSet[i-1] = dataSet[i];
                dataSet[i] = temp;
                swap = TRUE;
            }
            printf("---->FOR-LOOP CYCLE -----: %d\n",i);
            printArray("mpgData",dataSet,length);
        }
    }while(swap);
}
