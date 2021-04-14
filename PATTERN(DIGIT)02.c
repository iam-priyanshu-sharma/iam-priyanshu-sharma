/*Program to print the digit pattern*/
#include<stdio.h>
#include<conio.h>
int main()
   {
   	int i,j,x=1;
   	for(i=1;i<=5;i++)
       {
   	   	for(j=1;j<=i;j++)
   	   	    printf("%d ",x++);
   	    printf("\n");
       }
   	return 0;
   }
