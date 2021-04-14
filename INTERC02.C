/*Program to interchange values of 2 variables without using 3rd variable*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int x,y;
     clrscr();
     printf("Enter two integers:");
     scanf("%d%d",&x,&y);
     printf("Before interchanging 1st variable=%d\n2nd variable=%d",x,y);
     x=x+y;
     y=x-y;
     x=x-y;
     printf("\nAfter interchanging 1st variable=%d\n2nd variable=%d",x,y);
     getch();
     }