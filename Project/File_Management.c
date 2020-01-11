 /*
===========================================================================
Name: File_Management.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: C programming Essentials practices from Linda.com
===========================================================================
*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<conio.h>

void dataEntry(void);
void dataOutput(void);

struct Student{
            int roll;
            char name[25];
            float marks;
};

void main()
{
            dataEntry();
            //dataOutput();
            return EXIT_SUCCESS;
}


void dataEntry(void)
{
            FILE *fp;
              char ch;
              struct Student Stu;

              fp = fopen("Student.txt","w");

              do
              {
                      printf("\n--------------------------------------------------------------\n");
                      printf("\nEnter Roll : ");
                      scanf("%d",&Stu.roll);

                      printf("Enter Name : ");
                      scanf("%s",Stu.name);

                      printf("Enter Marks : ");
                      scanf("%f",&Stu.marks);

                      fwrite(&Stu, sizeof(Stu), 1, fp);

                      printf("\nDo you want to add another data (y/n) : ");
                      ch = getche();

              }while(ch=='y' || ch=='Y');

              printf("\nData written successfully...\n");
              fclose(fp);
}

void dataOutput(void)
{
            FILE *fp;
              char ch;
              struct Student Stu;

              fp = fopen("Student.txt","r");

              printf("\n\tRoll\tName\tMarks\n");

              while(fread(&Stu, sizeof(Stu), 1, fp)>0)
              {
                  printf("\n\t%d\t%s\t%f",Stu.roll,Stu.name,Stu.marks);
              }
              fclose(fp);
}

