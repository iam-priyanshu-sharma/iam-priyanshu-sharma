#include<stdio.h>
#include<conio.h>
void main()
     {
     int x,y,z;
     clrscr();
     printf("Enter two numbers");
     scanf("%d%d",&x,&y);
     z=x>y?x-y:y-x;
     printf("Difference=%d",z);
     getch();
     }