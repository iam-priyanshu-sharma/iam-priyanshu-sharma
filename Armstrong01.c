/*Program to check that a no. is Armstrong no. or not*/
#include<stdio.h>
#include<conio.h>
int main()
    {
      int n,temp,sum=0,r;
      printf("Enter a no.:");
      scanf("%d",&n);
      temp=n;
      while(n!=0)
              {
               r=n%10;
               sum=sum+(r*r*r);
               n=n/10;
              }
              if(temp==sum)
                 printf("The given no. is Armstrong:");
              else
                   printf("The given no. is not Armstrong:");
        return 0;
    }
