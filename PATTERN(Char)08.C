/*Program to print a specific character pattern*/
#include<stdio.h>
#include<conio.h>
void main()
    {
     int i,j,x=65;
     for(i=1;i<=5;i++)
       {
	       for(j=1;j<=5+1-i;j++)
	          printf("%c ",x++);
	       printf("\n");
       }
     getch();
    }
