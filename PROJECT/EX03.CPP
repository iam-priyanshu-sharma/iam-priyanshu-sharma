#include<stdio.h>
#include<conio.h>
void main()
     {
     int x=10,y=5,z=3;
     clrscr();
     x+=5;
     printf("X=%d",x);
     y-=3;
     printf("\nY=%d",y);
     z*=(y+z);
     printf("\nZ=%d",z);
     x/=y;
     printf("\nX=%d",x);
     y%=z;
     printf("\nY=%d",y);
     getch();
     }