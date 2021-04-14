/*Program to print the n term of fabonacci series*/
#include<stdio.h>
#include<conio.h>
int main()
   {
   	int t1=0,t2=1,t3,i=1,n;
   	printf("Enter no.of terms to print:");
   	scanf("%d",&n);
   	printf("The Fibonacci series is:");
   	while(i<=n)
   	     {
   	     	if(i==1)
   	     	  printf("%d\t",t1);
   	     	else if(i==2)
				   printf("%d\t",t2);
			else
			    {
			    	t3=t1+t2;
			    	printf("%d\t",t3);
			    	t1=t2;
			    	t2=t3;
				}
			i=i+1;		     
			}
	return 0;		
   }
