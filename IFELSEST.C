#include<stdio.h>
#include<conio.h>
void main()
     {
     int x,y;
     clrscr();
     printf("\nEnter two numbers:");
     scanf("%d%d",&x,&y);
     if(x<y)
       printf("\n%d is smaller",x);
     else
       printf("\n%d is smaller",y);
     getch();
     }