#include<stdio.h>
#include<conio.h>
void main ()
     {
     int x;
     clrscr();
     printf("\nEnter a number:");
     scanf("%d",&x);
     if(x<0)
	x=-1*x;
     printf("\nx=%d",x);
     getch();
     }