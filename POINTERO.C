/*Program to show the use of pointer operator*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int x,*y;
     x=10;
     clrscr();
     y=&x;
     printf("\nValue of x=%d",x);
     printf("\nValue of x=%d",y);
     printf("\nAddress of x=%u",&x);
     printf("\nAddress of x=%u",y);
     getch();
     }