/*Program to find the all prime factors of a number entered by the user*/
#include<stdio.h>
#include<conio.h>
int main()
    {
     int i,j,n,isPrime;
     printf("Enter any number to print prime factor:");
     scanf("%d",&n);
     printf("All Prime Factors of %d are: \n",n);
     for(i=2;i<=n;i++)
	{
	 if(n%i==0)
	   {
	    isPrime=1;
	    for(j=2;j<=i/2;j++)
	       {
		if(i%j==0)
		  {
		   isPrime=0;
		   break;
		  }
	       }
		if(isPrime==1)
		   printf("%d,",i);
	   }
	}
     return 0;
    }
