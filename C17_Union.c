/*
===========================================================================
Name: C17_Union.c
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

int main()
{
    /*
    In this imaginary protocol, it has been specified that, based on the "message type", the following location
    in the header will either be a request number, or a four character code, but not both. In short, unions allow
    for the same storage location to represent more than one data type, where it is guaranteed that you will only
    want to store one of the types of data at any one time.

    struct packetHeader {
               int sourceAddress;
               int destinationAddress;
               int messageType;
               union request {
                       char fourCharacter[4];
                       int requestNumber;
           };
        };
    */
    union symbol{
        int number;
        char letter;
    };

    union symbol value;

    value.number = 25;
    value.letter = 'm';           //m has replaced 25;

    union symbol *ptr;

    ptr = &value;                                            //Storing address of value
    char myLetter = ptr -> letter;         //Accessing Letter Field

    printf("Letter after Union: %c\n",myLetter);
    printf("Letter after Union: %d\n",myLetter);             //ASCII Value

    return EXIT_SUCCESS;
}
