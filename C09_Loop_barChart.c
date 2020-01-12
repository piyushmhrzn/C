/*
===========================================================================
Name: C09_Loop_barChart.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

void barChart(void);
void oneBar(int n);

int main()
{
    barChart();
    return EXIT_SUCCESS;
}

void barChart(void)
{
    oneBar(1);
    oneBar(3);
    oneBar(7);
    oneBar(9);
    oneBar(13);
    oneBar(20);
    oneBar(45);
}

void oneBar(int n)
{
    int i;
    printf("%3d:",n);
    for(i=0; i<n; i++)
    {
        putchar('•');   //ALT+7
    }
    printf("\n");
}

