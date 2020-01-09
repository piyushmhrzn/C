/*
===========================================================================
Name: C1_Functions_Banks.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

//Functions Prototype
int totalMarks(int a,int b,int c,int d);
float averageMarks(int a,int b,int c,int d);
void compare(float a,float b);

int main()
{
    int w1,w2,x1,x2,y1,y2,z1,z2,marks1,marks2;
    float average1,average2;

    printf("For Student 1:\n");
    printf("Enter total marks for Physics: ");
    scanf("%d",&w1);
    printf("Enter total marks for Chemistry: ");
    scanf("%d",&x1);
    printf("Enter total marks for Biology: ");
    scanf("%d",&y1);
    printf("Enter total marks for Computer: ");
    scanf("%d",&z1);

    printf("\nFor Student 2:\n");
    printf("Enter total marks for Physics: ");
    scanf("%d",&w2);
    printf("Enter total marks for Chemistry: ");
    scanf("%d",&x2);
    printf("Enter total marks for Biology: ");
    scanf("%d",&y2);
    printf("Enter total marks for Computer: ");
    scanf("%d",&z2);

    marks1 = totalMarks(w1,x1,y1,z1);
    marks2 = totalMarks(w2,x2,y2,z2);
    average1 = averageMarks(w1,x1,y1,z1);
    average2 = averageMarks(w2,x2,y2,z2);

    printf("\nTotal marks obtained by student 1 is %d\n",marks1);
    printf("Percentage scored by student 1 is %.2f%%\n",average1);

    printf("\nTotal marks obtained by student 2 is %d\n",marks2);
    printf("Percentage scored by student 2 is %.2f%%\n\n",average2);

    compare(average1,average2);

    return 0;
}

int totalMarks(int a,int b,int c,int d)
{
    int sum;
    sum = a+b+c+d;
    return sum;
}

float averageMarks(int a,int b,int c,int d)
{
    float avg;
    avg = (a+b+c+d)/4;
    return avg;
}

void compare(float a,float b)
{
    if(a>b)
    {
        printf("Student 1 scored higher\n");
    }
    else if(a==b)
    {
        printf("Both got same average\n");
    }
    else{
        printf("Student 2 scored higher\n");
    }
}
