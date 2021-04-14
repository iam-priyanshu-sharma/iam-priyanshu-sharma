/*Program to find the sum of digits of a number entered by the user using for loop*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int n,sum=0,r;
     clrscr();
     printf("Enter a three digit no:");
     for(scanf("%d",&n); n!=0;n=n/10)
	{
	 r=n%10;
	 sum=sum+r;
	}
     printf("Sum of digits=%d",sum);
     getch();
     }





