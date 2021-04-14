/*Program to check that a given year is a leap year or not using Logical operator*/

#include<stdio.h>
#include<conio.h>
void main()
     {
     int year;
     clrscr();
     printf("Enter year");
     scanf("%d",&year);
     if(year%100!=0&&year%4==0||year%400==0)
	printf("Leap year");
     else
	printf("Not a Leap year");
     getch();
     }