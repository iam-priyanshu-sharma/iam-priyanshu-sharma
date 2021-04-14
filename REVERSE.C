/*Program to find the reverse of a 5 digit no. entered by the user*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int n,n1;
     clrscr();
     printf("Enter a 5 digit no:");
     scanf("%d",&n);
     n1=n%10;
     n=n/10;
     n1=n1*10+n%10;
     n=n/10;
     n1=n1*10+n%10;
     n=n/10;
     n1=n1*10+n%10;
     n=n/10;
     n1=n1*10+n;
     printf("Reverse of a 5 digit no.=%d",n1);
     getch();
     }