 /*
===========================================================================
Name: C16_StructuresComplexVariables.c
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

//Constants
#define MAX_NAME_LENGTH   10      //Maximum Name Length or Characters in a Name
#define MAX_COLOR                      10      //Maximum Color Name Length
#define MAX_TEAMS                      5
#define MAX_NAMES                     5         //Maximum Names  that array can hold
#define MAX_COLORS                    3         //Maximum Colors that array can hold
#define MAX_AGE                           25

//globally defined structure with 5 fields,packed as one entity
struct person{
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    int age;
    char eyeColor[MAX_COLOR];
    float height;
};

//A "bank" of data to be used to populate arrays
char bankOfFirstNames[MAX_NAMES][MAX_NAME_LENGTH] = {"Piyush","Naresh","Sumit","Sudip","Yuhanna"};
char bankOfLastNames[MAX_NAMES][MAX_NAME_LENGTH] = {"Maharjan","Khasu","Karn","Magar","Kapali"};
char bankOfEyeColors[MAX_COLORS][MAX_COLOR] = {"Blue","Black","Brown"};

//array of 5 persons
struct person teams[MAX_TEAMS];

//Function prototypes
void printStructure(void);
void populateArrayOfStructs(void);


int main()
{
    populateArrayOfStructs();
    printStructure();

    return EXIT_SUCCESS;
}

//Function Definitions
void populateArrayOfStructs(void)
{
    int i;
    srand(time(NULL));   //Seed random no. generator with current time

    //populate the team array with random values from the bank of data
    for(i=0; i<MAX_TEAMS; i++)
    {
         int rF = rand() % MAX_NAMES;   //choose a random position for the array of first names
         int rL = rand() % MAX_NAMES;   //choose a random position for the array of last names
         int rC = rand() % MAX_COLORS;  //choose a random position for the array of colors
         strcpy(teams[i].firstName,bankOfFirstNames[rF]);
         strcpy(teams[i].lastName,bankOfLastNames[rL]);
         strcpy(teams[i].eyeColor,bankOfEyeColors[rC]);
         teams[i].age = 20 +  rand() % MAX_AGE;
         teams[i].height = 5.2 + (rand() % 10)/10.0;   //choose random height in feet and inches
    }
}

void printStructure(void)
{
    int i;
    for(i=0; i<MAX_TEAMS; i++)
    {
        printf("First Name: [%7s] ",teams[i].firstName);
        printf("Last Name: [%8s] ",teams[i].lastName);
        printf("Eye Color: [%5s] ",teams[i].eyeColor);
        printf("Age: [%2d] ",teams[i].age);
        printf("Height: [%3.1f]",teams[i].height);
        printf("\n");
    }
}
