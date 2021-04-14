/*Program to enter n mubers and find the sum of odd and even numbers seperately*/
#include<stdio.h>
#include<conio.h>
int main()
    {
      int n1,n,i,sum_odd=0,sum_even=0;
      printf("How many numbers you want to input:");
      scanf("%d",&n1);
      printf("Enter %d numbers:",n1);
      for(i=1;i<=n1;i++)
          {
           scanf("%d",&n);
           if(n%2==0)
              sum_even=sum_even+n;
           else
                sum_odd=sum_odd+n;
          }
      printf("\nSum of odd numbers=%d",sum_odd);
      printf("\nSum of even numbers=%d",sum_even);
      return 0;
    }
