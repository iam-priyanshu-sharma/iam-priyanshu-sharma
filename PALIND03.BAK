/*Program to check that a number entered by the user is palindrome or not using do...while loop*/
#include<stdio.h>
#include<conio.h>
void main()
    {
     int n,r,sum=0,t;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     t=n;
     do
       {
	r=n%10;
	sum=sum*10+r;
	n=n/10;
       }
     while(n>0);
     if(t==sum)
	printf("%d is a palindrome\n",t);
     else
	 printf("%d is not a palindrome\n",t);
     getch();
    }