/*
===========================================================================
Name: C11_Array_Multidimensional.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

#define ROWS 2
#define COLS 3

void printTable(int table[][COLS]);

int main(){

    //Initialize the two dimensional array
    int table[ROWS][COLS] = {{132,142,23},{0,76,872}};
    printTable(table);

    return 0;
}

printTable(int table[][COLS])
{
    printf("In Matrix Form:\n");
    int i,j;
        for(i=0; i<ROWS; i++)
        {
            for(j=0; j<COLS; j++)
            {
                printf("%5d",table[i][j]);
            }
            printf("\n");
        }
}
