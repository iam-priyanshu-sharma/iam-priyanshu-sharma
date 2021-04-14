/*Program to print the table of a number using for loop*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int n,i;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     for(i=1;i<=10;++i)
	{
	 printf("%d*%d=%d\n",n,i,n*i);
	}
     getch();
     }