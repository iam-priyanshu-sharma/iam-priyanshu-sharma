/*Program to find the sum of odd and even numbers seperatily from 1 to n*/
#include<stdio.h>
#include<conio.h>
int main()
    {
      int i,n,odd_sum=0,even_sum=0;
      printf("Enter n number:");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
          {
            if(i%2==0)
               even_sum=even_sum+i;
            else
                 odd_sum=odd_sum+i;
          }
       printf("Sum of all odd numbers=%d\n",odd_sum);
       printf("Sum of all even numbers=%d\n",even_sum);
       return 0;
    }
