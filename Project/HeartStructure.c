 /*
===========================================================================
Name: HeartStructure.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>

#define MAX_NAME_LENGTH 10
#define MAX_NAMES 5
#define MAX_DISTANCE 2000
#define MAX_PERCENTAGE 100
#define MAX_COUPLES 5

struct heart{
    char boyName[MAX_NAME_LENGTH];
    char girlName[MAX_NAME_LENGTH];
    int distance;
    float matchPercentage;
};

char bankOfBoys[MAX_NAMES][MAX_NAME_LENGTH] = {"Sumit","Sudip","Sandeep","Sunil","Yuhanna"};
char bankOfGirls[MAX_NAMES][MAX_NAME_LENGTH] = {"Aakriti","Malika","Dhinchak","Samjhana","Kalpana"};

struct heart match[MAX_COUPLES];

void populateArrayOfStructs(void);
void printStructure(void);

int main()
{
    populateArrayOfStructs();
    printStructure();
    return EXIT_SUCCESS;
    getch();
}

void populateArrayOfStructs(void)
{
    int i;
    srand(time(NULL));    //Seed random no. generator with current time

    for(i=0; i<MAX_COUPLES; i++)
    {
        int rB = rand() % MAX_NAMES;
        int rG = rand() % MAX_NAMES;
        strcpy(match[i].boyName,bankOfBoys[rB]);
        strcpy(match[i].girlName,bankOfGirls[rG]);
        match[i].distance = rand() % MAX_DISTANCE;
        match[i].matchPercentage = rand() % MAX_PERCENTAGE + (rand() % 10)/10.0;
    }
}

void printStructure(void)
{
    int i;
    for(i=0; i<MAX_COUPLES; i++)
    {
        printf("[%7s] ^ ",match[i].boyName);
        printf("[%8s] ",match[i].girlName);
        printf("Distance: [%4d km] ",match[i].distance );
        printf("Love Percentage: [%5.2f %%]",match[i].matchPercentage);
        printf("\n");
    }
}
