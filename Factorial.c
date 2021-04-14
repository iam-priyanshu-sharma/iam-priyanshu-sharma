/*Program to find the factorial of a given number*/
#include<stdio.h>
#include<conio.h>
int main()
    {
      int i,fact=1,n;
      printf("Enter a number:");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
           fact=fact*i;
      printf("Factorial of %d=%d",n,fact);
      return 0;
    }
