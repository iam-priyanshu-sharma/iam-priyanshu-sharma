#include<stdio.h>
#include<conio.h>
void main()
     {
     int n,s;
     clrscr();
     printf("Enter a 4 digit no.");
     scanf("%d",&n);
     s=n/1000+n%10;
     printf("Sum of 1st and last digit=%d",s);
     getch();
     }
