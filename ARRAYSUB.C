/*Program to the use of array subscript operator*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int a[3],sum;
     clrscr();
     printf("Enter 3 elements of array:");
     scanf("%d%d%d",&a[0],&a[1],&a[2]);
     sum=a[0]+a[1]+a[2];
     printf("sum of elements=%d",sum);
     getch();
     }