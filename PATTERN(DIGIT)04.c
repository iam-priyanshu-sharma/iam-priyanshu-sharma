/*Program to print a specific digit pattern*/
#include<stdio.h>
#include<conio.h>
int main()
   { 
    int i,j;
    for(i=1;i<=5;i++)
       {
       	for(j=1;j<=5-i+1;j++)
       	    printf("%d ",j);
       	printf("\n");    
	   }
	return 0;   
   }
