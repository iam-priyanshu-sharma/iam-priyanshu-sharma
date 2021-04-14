/*Program to print all the 3 digit no. made by having digits 1,2 and 3(No repetition)*/
#include<stdio.h>
#include<conio.h>
void main()
    {
     int i,j,k;
     clrscr();
     for(i=1;i<=3;i++)
	for(j=1;j<=3;j++)
	   for(k=1;k<=3;k++)
	      if(i!=j && j!=k && i!=k)
		printf("%d%d%d\n",i,j,k);
     getch();
    }