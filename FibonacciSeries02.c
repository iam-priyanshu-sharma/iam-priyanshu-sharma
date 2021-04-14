/*Program to print the nth term of Febonacci series*/
#include<stdio.h>
#include<conio.h>
int main()
   {
   	int t1=0,t2=1,t3,i=3,n;
   	printf("Enter term no:");
   	scanf("%d",&n);
   	printf("The term is:");
   	if(n==1)
   	  printf("%d\t",t1);
   	else if(n==2)
	       printf("%d\t",t2);
	else
	    {
	     while(i<=n)
	          {
			    t3=t1+t2;
	    	    t1=t2;
	    	    t2=t3;
	    	    i++;
	          }
	     printf("%d",t3);    	
		}
	return 0;		     
   }
