/*
===========================================================================
Name: C13_Array_RandomBar.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10

void showBarChart(void);
void showOneBar(int barLength);
void setDataValues(void);

int dataSet[SIZE];

int main()
{
    setDataValues();
    showBarChart();
    return 0;
}

void setDataValues(void)
{
    int i;
    srand(time(NULL));
    for(i=0; i<SIZE; i++)
    {
        dataSet[i] = rand()%50;
    }
}

void showBarChart(void)
{
    //Loops through dataset array,reads each
    //point and calls function with that value
    int i;
    for(i=0; i<SIZE; i++)
    {
        showOneBar(dataSet[i]);
    }
}
void showOneBar(int barLength)
{
    //Creates ONE Horizontal Bar
    int i;
    printf("%3d: ",barLength);
    for(i=0; i<barLength; i++)
    {
        putchar('•');   //ALT+7
    }
    printf("\n");
}

