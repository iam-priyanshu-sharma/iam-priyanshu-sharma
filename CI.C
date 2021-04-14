/*Program to find the Compound Intrest for the value of principal amount,rate of intrest and time*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
     {
     int p;
     float r,t,ci;
     clrscr();
     printf("Enter p,r and t:");
     scanf("%d%f%f",&p,&r,&t);
     ci=p*(pow(1+r/100,t)-1);
     printf("Compound intrest=%.2f",ci);
     getch();
     }