/*Program to print the table of a number entered by the user using a function(with argument but no return)*/
#include<stdio.h>
#include<conio.h>
void table(int);
void main()
    {
        int n;
        system("cls");
        printf("\nEnter no. to print it's table:");
        scanf("%d",&n);
        table(n);
        getch();
    }
void table(int x)
    {
        int i;
        for(i=1;i<=10;i++)
           printf("\n%d",i*x);
    }    