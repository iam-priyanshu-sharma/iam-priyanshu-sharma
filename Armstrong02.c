/*Program to find all armstrong numbers from 1 to 1000*/
#include<stdio.h>
#include<conio.h>
int main()
    {
      int n,i,temp,sum,r;
      printf("Enter limit:");
      scanf("%d",&n);
      for(i=1;i<n;i++)
          {
           temp=i;
           sum=0;
           while(temp!=0)
                   {
                    r=temp%10;
                    sum=sum+(r*r*r);
                    temp=temp/10;
                   }
             if(i==sum)
                printf("\n%d",i);
          }
      return 0;
    }
