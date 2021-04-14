/*Program to multiply two numbers without using astric(*)*/
#include<stdio.h>
#include<conio.h>
int main()
   {
   	int x,y,product=0;
   	printf("Enter two numbers:");
   	scanf("%d%d",&x,&y);
   	while(y!=0)
   	     {
   	     	product +=x;
   	     	y--;
		 }
	printf("\nProduct of two numbers=%d",product);
	return 0;
   }
