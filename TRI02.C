/*Program to check whether the triangle is isosceles or equilateral or scalene or right angle triangle*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
    {
     int a,b,c;
     clrscr();
     printf("Enter the sides of a triangle:");
     scanf("%d%d%d",&a,&b,&c);
     if((a>b && a>c) && a<(b+c)||(b>a && b>c) && b<(a+c)||(c>a && c>b) && c<(a+b)||(a==b && b==c))
     {
      if(a==b && b==c)
	printf("This triangle is an equilateral triangle.");
      if(a==b||b==c||a==c)
	printf("This triangle is an isosceles triangle.");
      if(a!=b && b!=c && a!=c)
	printf("This triangle is a scalene triangle.");
      if(a>b && a>c)
      {
       if(a*a==(b*b)+(c*c))
	  printf("This triangle is a right angled triangle.");
       }
       else if(b>a && b>c)
       {
	if(b*b==(a*a)+(c*c))
	   printf("This triangle is a right angled triangle.");
	}
	else
	{
	 if(c*c==(a*a)+(b*b))
	    printf("This triangle is a right angled triangle.");
	 }
     }
      else
	  printf("These are the sides of a invalid triangle.");

     getch();
     }

