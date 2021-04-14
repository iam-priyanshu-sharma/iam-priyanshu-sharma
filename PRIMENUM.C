/*Program to check that a given number is prime or not*/
#include<stdio.h>
#include<conio.h>
void main()
    {
     int n,k,p=1;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     if(n%2==0 && n!=2)
	p=0;
     else
	 for(k=3;k*k<=n;k=k+2)
	     if(n%k==0)
		{
		 p=0;
		 break;
		}
     if(p==1)
	printf("Number is prime");
     else
	 printf("Number is not a prime");
     getch();
    }