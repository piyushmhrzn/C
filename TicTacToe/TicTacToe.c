 /*
===========================================================================
Name: MyGame.c
Author: Piyush Maharjan
Version: 1.0
Copyright: Copyright 2019 MyBuy.LTD
Description: Tic Tac Toe Main Program
===========================================================================
*/

#include<stdio.h>
#include<stdlib.h>

struct myDataType{
    int i;
    char ch;
}inputValue();

void run(void);
int check(char sym[], char ch[], int count);
struct myDataType inputValue(char sym[], int count);
void display(char sys[]);

int main()
{
    char restart[1];

    while(1)
    {
        //again:
        run();
        printf("\nTo Continue press 'Y':  ");
        scanf("%s",restart);
        if(*restart == 'y' || *restart == 'Y')
        {
            system("cls");
        }else{
            exit(0);
        }
    }
    return EXIT_SUCCESS;
}

void run()
{
    int count=0;
    struct myDataType info;
    char symbol[9] = {'1','2','3','4','5','6','7','8','9'};
    display(symbol);

    while(1)
    {
        //again:
        info = inputValue(symbol,count);
        //if user input correctly it will replace the value symbol[] with this value in current position
        symbol[info.i] = info.ch;
        system("cls");               //ClearScreen In-built Function
        display(symbol);
        if(check(symbol,info.ch,count) == 1)
        {
            break;
        }
        else{
            count++;
            //goto again;
            }
    }
}

int check(char  sym[], char ch[], int count)
{
    int i;
    for(i=0; i<9; i+=3)      //for Row
    {
        if(sym[i]==ch && sym[i+1]==ch && sym[i+2]==ch)
        {
            printf("\n\tThe winner is : [%c]\n",ch);
            return 1;
        }
    }

     for(i=0; i<9; i+=3)      //for Column
    {
        if(sym[i]==ch && sym[i+3]==ch && sym[i+6]==ch)
        {
            printf("\n\tThe winner is : [%c]\n",ch);
            return 1;
        }
    }
         if(sym[0]==ch && sym[4]==ch && sym[8]==ch)     //for Diagonal
        {
            printf("\n\tThe winner is : [%c]\n",ch);
            return 1;
        }
        else if(sym[2]==ch && sym[4]==ch && sym[6]==ch)   //for Diagonal
        {
            printf("\n\tThe winner is : [%c]\n",ch);
            return 1;
        }
        else if(count == 8)
        {
            printf("\n\tThe game is DRAW\n");
            return 1;
        }
        else return 0;

}

//Structure Function
struct myDataType inputValue(char sym[], int count){    //count is used to find out which user is inputing
    char value[1];                                  //value to hold the user input
    int i;
    struct myDataType info;           //info to return the information to run function

    inputAgain:
    if(count%2 == 0){                        //For user 1:even number and user 2: odd number
        printf("\n\nEnter your Choice 'X': ");
    }else{
        printf("\n\nEnter your Choice '0': ");
    }
    scanf("%s",value);                      //Taking pointer value

    //After taking the input value from user, we will match with the symbol of run function
    for(i=0; i<9; i++)
    {
        if(*value == sym[i])
        {
            info.i = i;                                  //when value matches symbol in run function,store count in info.i
            if(count%2==0)                  //input value accordingly to user 1 or user 2
            {
                info.ch = 'X';                      //store character symbol inside info.ch
            }
            else{
                info.ch = 'O';
            }
            break;                                  //end loop
        }else{
            info.i = -1;
            info.ch = "";
        }
    }
    if(info.i == -1)
    {
        printf("\nInput is not Valid\n");
        goto inputAgain;
    }
    return info;
}

void display(char sym[])
{
    printf("-----------------------------------------\n");
    printf("\t Tic Tac Toe Game\n");
    printf("-----------------------------------------\n");
    printf("Player 1 Symbol: X\n");
    printf("Player 2 Symbol: 0\n\n");
    printf("\n\t       |       | ");
    printf("\n\t   %c   |   %c   |   %c ",sym[0],sym[1],sym[2]);
    printf("\n\t-------|-------|-------");
    printf("\n\t   %c   |   %c   |   %c ",sym[3],sym[4],sym[5]);
    printf("\n\t-------|-------|-------");
    printf("\n\t   %c   |   %c   |   %c ",sym[6],sym[7],sym[8]);
    printf("\n\t       |       | \n");
}
