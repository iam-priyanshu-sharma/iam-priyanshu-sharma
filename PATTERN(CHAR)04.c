/*Program to print a specific character pattern*/
#include<stdio.h>
#include<conio.h>
int main()
   {
   	int i,j;
   	for(i=1;i<=5;i++)
   	   {
   	   	for(j=i;j<=5;j++)
   	   	    printf("%c ",j+64);
   	   	printf("\n");    
	   }
	return 0;   
   }
