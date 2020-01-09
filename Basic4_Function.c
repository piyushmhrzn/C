/*
===========================================================================
Name: Basic4_Function.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

//External Functions
#include<stdio.h>
#include<stdlib.h>

//An alternative is to manually define a new type
typedef int age;

//Special Constants
#define LEGAL_AGE 18                //Global Legal Age to drink declared

int main()
{
    char c,name[20];                      //Assigns name as character value for storing strings in array
    age x;                                //Assigns x as integer value age declared globally

    printf("Enter your province no: ");   //Print the question to the console viewable to user
    c = getchar();                        //Storing the decimal value as character instead of integer

    printf("Enter your name: ");          //Print the question to the console viewable to user
    scanf("%s",&name);                    //Store the name as group of characters or string

    printf("Enter your age: ");           //Print the question to the console viewable to user
    scanf("%d",&x);                       //Store the value given by the user
    legal(x,c,name);                      //Passing the value to the function
    return 0;
}

//Custom Function Definition
void legal(int fage,char c,char name[])     //user-defined function legal with arguments of integer & character values
{
    if(fage>=LEGAL_AGE)                     //if statement to check whether passed value >= to global constant
    {
        printf("Entered Name: %s\n",name);  //print entered name
        printf("Province No.: ");
        putchar(c);                         //Displaying the character value stored from getchar() function
        printf("\n");
        printf("You are legal to drink");   //if statement is true, print this
    }
    else                                    //else print this
    {
        printf("Entered Name: %s\n",name);
        printf("Province No.: ");
        putchar(c);
        printf("\n");
        printf("You are NOT legal to drink");
    }
}



