/*Program to print the table of a number using while loop*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int n,i;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     i=1;
     while(i<=10)
	  {
	   printf("%d*%d=%d\n",n,i,n*i);
	   ++i;
	  }
     getch();
     }