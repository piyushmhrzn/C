/*
===========================================================================
Name: C20_File_Mgmnt_Append.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void copyFromSourceToDestination(void);
void appendCopyrightNotice(void);

int main()
{
    //copyFromSourceToDestination();
   appendCopyrightNotice();

    return EXIT_SUCCESS;
}

void copyFromSourceToDestination(void)
{
    int ch;
    FILE *src, *dest;          //pointers to file type
    src = fopen("sourceFile.txt","r");
    dest = fopen("destinationFile.txt","w");
    ch = getc(src);
    while(ch != EOF)
    {
        putc(ch, dest);    //write to destination file
        ch = getc(src);
    }
    printf("------------------------------------------------------------------------\n");
    printf("Data copied from Source File to Destination File Successfully...");
    printf("\n------------------------------------------------------------------------\n");
    fclose(src);
    fclose(dest);
}
void appendCopyrightNotice(void)
{
     FILE *fp;

     //open the destination file to append copyright notice
     fp = fopen("destinationFile.txt","a");
     fprintf(fp,"\n\nCopyright 2020, Bohemian Rhapsody - Queen");
     printf("----------------------------------------\n");
     printf("Copyright Issued Successfully...");
     printf("\n----------------------------------------\n");
     fclose(fp);
}
