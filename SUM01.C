/*Program to find the sum of digits of a number entered by the user using while loop*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int n,sum=0;
     clrscr();
     printf("Enter a three digit no:");
     scanf("%d",&n);
     while(n>0)
	  {
	   sum=sum+n%10;
	   n=n/10;
	  }
     printf("Sum of digits=%d",sum);
     getch();
     }