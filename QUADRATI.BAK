/*Program to find the solution of(roots of) a quadratic equation for the values of a,b and c entered by the user*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
     {
     float a,b,c,d,d1,x,y;
     clrscr();
     printf("Enter co-efficients of quadratic equation:");
     scanf("%f%f%f",&a,&b,&c);
     d=(b*b)-(4*a*c);
     if(d==0)
       {
	printf("Roots are real and equal:");
	x=-b/(2*a);
	printf("Roots=%f",x);
       }
     else if(d>0)
	 {
	  d1=sqrt(d);
	  printf("Roots are real and unequal:");
	  x=(-b+d1)/(2*a);
	  y=(-b-d1)/(2*a);
	  printf("\nFirst root=%f",x);
	  printf("\nSecond root=%f",y);
	 }
     else
	{
	 printf("Roots are imaginary and conjugate of each other:");
	 x=-b/(2*a);
	 y=sqrt(-d)/(2*a);
	 printf("\nFirst root=%f+%f*i",x,y);
	 printf("\nSecond root=%f-%f*i",x,y);
	}
     getch();
     }