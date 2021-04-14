/*Program to print a specific character pattern*/
#include<stdio.h>
#include<conio.h>
int main()
   {
   	int i,j;
   	for(i=1;i<=5;i++)
   	   {
   	   	for(j=1;j<=5-i+1;j++)
   	   	    printf("%c ",j+64);
   	   	printf("\n");    
	   }
	return 0;    
   }
