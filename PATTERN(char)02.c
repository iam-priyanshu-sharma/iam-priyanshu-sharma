/*Program to print a specific character pattern*/
#include<stdio.h>
#include<conio.h>
int main()
   {
   	int i,j,x=65;
   	for(i=1;i<=5;i++)
       {
   	   	for(j=1;j<=i;j++)
   	   	    printf("%c ",x++);
   	    printf("\n");
       }
   	return 0;
   }
