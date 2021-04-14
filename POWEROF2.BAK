/*Program to check that a number is power of 2 or not without using bitwise operator*/
#include<stdio.h>
#include<conio.h>
void main()
    {
     int n,tempNum,flag;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     tempNum=n;
     flag=0;
     while(tempNum!=1)
	  {
	   if(tempNum%2!=0)
	     {
	      flag=1;
	      break;
	     }
	   tempNum=tempNum/2;
	  }
     if(flag==0)
	printf("%d is a number that is the power of 2.",n);
     else
	 printf("%d is not the power of 2.",n);
     getch();
    }
