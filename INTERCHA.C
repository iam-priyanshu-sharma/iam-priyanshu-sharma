/*Program to interchange values of 2 variables using 3rd variable*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int x,y,z;
     clrscr();
     printf("Enter two integers:");
     scanf("%d%d",&x,&y);
     printf("Before interchanging 1st variable=%d\n2nd variable=%d",x,y);
     z=x;
     x=y;
     y=z;
     printf("\nAfter interchanging 1st variable=%d\n2nd variable=%d",x,y);
     getch();
     }