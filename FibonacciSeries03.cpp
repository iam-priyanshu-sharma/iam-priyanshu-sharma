/*Program to print the fibonacci series having last term less than 200*/
#include<stdio.h>
#include<conio.h>
int main()
   {
   	int n,t1=0,t2=1,t3,i;
   	printf("Enter limit of terms:");
   	scanf("%d",&n);
   	if(n>=0)
   	  printf("\t%d",t1);
   	if(n>=1)
	  printf("\t%d",t2);
	t3=t1+t2;
	while(t3<=n)
	     {
	      printf("\t%d",t3);
		  t1=t2;
		  t2=t3;
		  t3=t1+t2;	
		 }
	return 0;	     
   }
