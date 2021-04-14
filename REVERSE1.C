/*Program to find the reverse of a number using while loop*/
#include<stdio.h>
#include<conio.h>
void main()
    {
     int n,rev=0,r;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     while(n!=0)
	  {
	   r=n%10;
	   rev=rev*10+r;
	   n /=10;
	  }
     printf("Reversed number=%d",rev);
     getch();
    }