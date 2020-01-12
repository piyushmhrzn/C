/*
===========================================================================
Name: C21_UserDefined_Functions.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Global Variable
double companyResults[];

//Function Prototypes
void readData(void);
void validateData(void);
void processData(void);
void analyzeResults(void);
void generateReport(void);
void writeFormattedReport(void);
void archiveData(void);
void disseminateResults(void);

void someFunction(int a, int b);
void someOtherFunction(int *a, int *b);

int main()
{
    /*
    readData();
    validateData();
    processData();
    analyzeResults();
    generateReport();
    writeFormattedReport();
    archiveData();
    disseminateResults();
    */

    printf("--- BY VALUE ---\n");
    int x = 0;
    int y = 0;

    printf("Before Function call: x=%d  y=%d\n",x,y);
    someFunction(x,y);
    printf("After Function call: x=%d  y=%d\n\n",x,y);

    printf("--- BY REFERENCE ---\n");

    printf("Before Function call: x=%d  y=%d\n",x,y);
    someOtherFunction(&x, &y);
    printf("After Function call: x=%d  y=%d\n",x,y);

    return EXIT_SUCCESS;
}

//--------FUNCTION DEFINITIONS-------

void someFunction(int a, int b)
{
    printf("Values received in Function: a=%d  b=%d\n",a,b);
    a = 1;
    b = 2;
    printf("Values Modified in Function: a=%d  b=%d\n",a,b);
}

void someOtherFunction(int *a, int *b)
{
    printf("Values received in Function: a=%d  b=%d\n",*a, *b);
    *a = 1;
    *b = 2;
    printf("Values Modified in Function: a=%d  b=%d\n",*a, *b);
}

void readData(void)
{
    int i;

    //This function reads data from file into an array
    FILE *fp;
    int numRecords = 20;       //assume there are 20 records to read
    fp = fopen ("companyData.txt","r");  //this is a dummy text file

    for(i=0; i<numRecords; i++)
    {
        fscanf(fp,"%g", &companyResults[i]);
    }
    fclose(fp);
}

void validateData(void)
{
    /*
      * are the numbers within a plausible range?
      * is the data size consistent with what would have been collected
      * are there any struct fields, array elements, etc. that are empty?
      * do all data files have content?
      * are all files readable?
      *
      */

}

void processData(void)
{
    //identify necessary formulas, formats and standards

}

void analyzeResults(void)
{
    /*
      * produce graphs, tables, lists as needed
      * perform statistical analysis as needed
      * identify outliers or any "out of the ordinary" results
      */

}

void generateReport(void)
{
    //create formatted accordingly to project or policy requirements

}

void writeFormattedReport(void)
{
    //create formatted accordingly to project or policy requirements

}

void archiveData(void)
{
    //make copies of data, results, and reports

}

void disseminateResults(void)
{
    //store results and reports at appropriate locations
    //generate communication updates

}
