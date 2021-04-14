/*Program to find the S.I. for the value of principal amount,rate of intrest and time*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
     {
     int p;
     float r,t,si;
     clrscr();
     printf("Enter p,r and t:");
     scanf("%d%f%f",&p,&r,&t);
     si=(p*r*t)/100;
     printf("\nSimple Intrest=%.2f",si);
     getch();
     }