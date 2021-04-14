/*Program to print the table of a number using do...while loop*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int i=1,n;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     do
       {
	printf("%d*%d=%d\n",n,i,n*i);
	i++;
       }
     while(i<=10);
     getch();
     }