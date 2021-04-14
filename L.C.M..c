/*Program to find the L.C.M. of 2 numbers entered by the user*/
#include<stdio.h>
#include<conio.h>
int main()
   {
   	int i,a,b;
   	printf("Enter two nos:");
   	scanf("%d%d",&a,&b);
   	for(i=1;i<=a*b;i++)
   	   if(i%a==0 && i%b==0)
   	     break;
   	printf("L.C.M.=%d",i);
	return 0;        
   }
