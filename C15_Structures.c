 /*
===========================================================================
Name: C15_Structures.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NAME 30
#define MAX_COLOR 15

//globally defined structure with 5 fields,packed as one entity
struct person{
    char firstName[MAX_NAME];
    char lastName[MAX_NAME];
    int age;
    char eyeColor[MAX_COLOR];
    char qualify[MAX_NAME];
    float height;
};

//Function prototypes
void printStructure(struct person individual);

int main()
{
    //citizen is a variable of type person
    struct person citizen;
    printf("Enter your first name: ");
    scanf("%s",strcpy(citizen.firstName,""));

    printf("Enter your last name: ");
    scanf("%s",strcpy(citizen.lastName,""));

    printf("Enter your age: ");
    scanf("%d",&citizen.age);

    citizen.height = 5.9;
    //strcpy(citizen.lastName,"Maharjan");
    //strcpy(citizen.firstName,"Piyush");
    strcpy(citizen.eyeColor,"Brown");
    strcpy(citizen.qualify,"Bachelor");

    //pass entire structure to the function as one group
    printStructure(citizen);

    return EXIT_SUCCESS;
}

void printStructure(struct person individual)
{
    printf("----------------------------------------\n");
    printf("First Name: %s\n",individual.firstName);
    printf("Last Name: %s\n",individual.lastName);
    printf("Age: %d\n",individual.age);
    printf("EyeColor: %s\n",individual.eyeColor);
    printf("Qualification: %s\n",individual.qualify);
    printf("Height: %.1f\n",individual.height);
    printf("----------------------------------------\n");
}
