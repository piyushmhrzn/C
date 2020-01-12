/*
===========================================================================
Name: C05_Decisions_TrafficLights.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

void askTrafficLight(void);
void checkTrafficLight(char color);
void redLight(void);
void yellowLight(void);
void greenLight(void);
void errorSignal(void);

int main()
{
    askTrafficLight();
    return EXIT_SUCCESS;
}

void askTrafficLight(void)
{
    char light;
    printf("What color is the traffic light?\n");
    printf(" y: Yellow\n g: Green\n r: Red\n\n Choice:");
    light = getchar();
    checkTrafficLight(light);
}

void checkTrafficLight(char color)
{
    switch(color)
    {
        case 'r':
        redLight();
        break;

        case 'y':
        yellowLight();
        break;

        case 'g':
        greenLight();
        break;

        default:
            errorSignal();
    }
}

void redLight(void)
{
    printf("You must stop your car right now.");
}

void yellowLight(void)
{
    printf("Set your car to gear and get ready.");
}

void greenLight(void)
{
    printf("You can go now");
}

void errorSignal(void)
{
    printf("The is unrecognizable color. Is there a malfunction");
}
