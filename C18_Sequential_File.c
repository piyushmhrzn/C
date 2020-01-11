/*
===========================================================================
Name: C18_Sequential File.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Function Prototypes
void readEntireFile(void);
void readUntilMarker(char marker);
//void writeToFile(void);

int main()
{
    readEntireFile();
    printf("\n------------------------------------------------------------------------------");
    readUntilMarker(':');
    printf("\n------------------------------------------------------------------------------\n");
    writeToFile();

    return EXIT_SUCCESS;
}

void readEntireFile(void)
{
     int ch;
     FILE *fp;       //pointer to a file type
     fp = fopen("message.txt","r");
     ch = getc(fp);
     while(ch != EOF)              //keep looping until END OF FILE
    {
            putchar(ch);                //print the characters read
            ch = getc(fp);
     }
     fclose(fp);
}

void readUntilMarker(char marker)
{
    int ch;
    FILE *fp;
    fp = fopen("message.txt","r");
    ch = getc(fp);
    while(ch != marker)         //keep looping until marker is read
    {
        putchar(ch);
        ch = getc(fp);
    }
    fclose(fp);
}

void writeToFile(void)
{
    FILE *fp;
    fp = fopen("message1.txt","w");
    char author[15] = "Pink Floyd";
    fprintf(fp,"%s",author);
    fclose(fp);
}
