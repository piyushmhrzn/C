/*
===========================================================================
Name: C08_Loop_doWhile.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

void getInputData1(void);
void getInputData2(void);
void whileLoop(int num);
void testBreak(void);

int main()
{
    //whileLoop(1);
    //getInputData1();
    //getInputData2();
    testBreak();
    return 0;
}

void whileLoop(int num)
{
    int flag=FALSE;
    while(!flag)
    {
        printf("%d\t",num);
        num++;
        if(num>=6)
        {
            flag=TRUE;
        }
    }
}

void getInputData1(void)
{
    char c = 'x';
    int testVariable = 0;
    while(c != 'x')
    {
        testVariable = 99;
        printf("Enter a letter: ");
        c = getchar();
        printf("You entered: %c\n",c);
        getchar();
    }
    printf("\nYou entered [x] and the loop exited.\n");
    printf("testVariable in while loop: %d\n\n",testVariable);
}

void getInputData2(void)
{
    char c = 'x';
    int testVariable = 0;
    do
    {
        testVariable = 99;
        printf("Enter a letter: ");
        c = getchar();
        printf("You entered: %c\n",c);
        getchar();
    }while(c != 'x');

    printf(" You entered [x] and the loop exited.\n");
    printf("testVariable in do-while loop: %d\n",testVariable);
}

void testBreak(void)
{
    int n;
    int counter = 0;
    while(1)
    {
        printf("Cycle [%d] : Enter a number: \n",counter);
        scanf("%d",&n);
        if((n==0) || (counter>=5))
        {
            break;
        }
        counter++;
    }
}
