/*Program to show the use of membership operator*/
#include<stdio.h>
#include<conio.h>
struct example
       {
       int x;
       float y;
       char z;
       };
void main()
       {
       struct example a,*p;
       clrscr();
       a.y='A';
       a.x=70;
       p=&a;
       printf("\n a.x=%d",a.x);
       printf("\n a.y=%d",a.y);
       printf("\n a.z=%d",a.z);
       printf("\n a.x=%d",p->x);
       printf("\n a.y=%d",p->y);
       printf("\n a.z=%d",p->z);
       getch();
       }
