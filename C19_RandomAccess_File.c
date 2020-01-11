/*
===========================================================================
Name: C19_RandomAccess_File.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void readAndVerify(void);
void addTextToLocation(void);

int main()
{
  // readAndVerify();
     addTextToLocation();

    return EXIT_SUCCESS;
}

void readAndVerify(void)
{
    int ch;
    FILE *fp;
    char messageToWrite[] = "This message will be written to a File";       //strlen =38

    //array to store up to 30 characters read from the file
    char textBuffer[30];

    fp = fopen("messageR.txt","w+");
    fwrite(messageToWrite, strlen(messageToWrite)+1, 1, fp);

    //Go back to beginning of file using fseek function
    fseek(fp, SEEK_SET, 0);

    //Verify that message has been written by reading the file
    //Read the same number of characters as one written above
    fread(textBuffer, sizeof(messageToWrite), 1, fp);

    printf("%s\n",textBuffer);
    fclose(fp);
}

void addTextToLocation(void)
{
    FILE *fp;
    fp = fopen("messageR.txt","w+");
    fputs("Not much to say Today",fp);

    fseek(fp, 8, SEEK_SET);       //pointer set to beginning at 8th position in original text
    fputs(" to talk about",fp);
    printf("\n=>Execution Successful\n");
    printf("=>Pointer points to 8th position of first line\n  and thus becomes starting reference for second line.");

    fclose(fp);
}


