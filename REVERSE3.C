/*Program to find the reverse of a number using for loop*/
#include<stdio.h>
#include<conio.h>
void main()
    {
     int n,i,r,sum=0;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     for(i=n;i>0;)
	   {
	     r=i%10;
	     sum=sum*10+r;
	     i /=10;
	   }
     printf("The reverse number of %d=%d\n",n,sum);
     getch();
    }