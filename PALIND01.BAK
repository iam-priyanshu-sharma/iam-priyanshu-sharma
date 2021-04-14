/*Program to check that a no. entered by the user is palindrome or not using for loop*/
#include<stdio.h>
#include<conio.h>
void main()
    {
     int n,r,sum=0,t;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     for(t=n;n!=0;n=n/10)
	{
	 r=n%10;
	 sum=sum*10+r;
	}
     if(t==sum)
	printf("%d is a palindrome number.\n",t);
     else
	 printf("%d is not a palindrome number.\n",t);
     getch();
     }