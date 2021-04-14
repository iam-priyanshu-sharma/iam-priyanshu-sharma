/*Program to find the area and perimeter of a triangle whose sides are entered through the keyboard with validation check*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
     {
     float a,b,c,Perimeter,s,Area;
     clrscr();
     printf("\nEnter three sides of triangle\n");
     scanf("%f%f%f",&a,&b,&c);
     if(a+b>c && a+c>b && b+c>a)
       {
       Perimeter=a+b+c;
       s=(a+b+c)/2.0;
       Area=sqrt(s*(s-a)*(s-b)*(s-c));
       printf("\nPerimeter of Triangle=%.2f\n",Perimeter);
       printf("\nSemi Perimeter of Triangle=%.2f\n",s);
       printf("\nArea of Triangle=%.2f\n",Area);
       }
     else
	printf("Given sides can't form a Triangle");
     getch();
     }