/*Program to find the sum of 1st n natural numbers and also find the average,sum of odd and even numbers seperately*/
#include<stdio.h>
#include<conio.h>]
void main()
    {
        int n,i,sum=0,sum_even=0,sum_odd=0,avg;
        printf("enter value of n:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
           {
              sum+=i;
              if(i%2==0)
                 sum_even+=i;
              else 
                  sum_odd+=i;
           }
        avg=sum/n;
        printf("\nSum of first %d natural nos.=%d ",n,sum);
        printf("\nSum of first %d even natural nos.=%d ",n,sum_even);
        printf("\nSum of first %d odd natural nos.=%d",n,sum_odd);
        printf("\nAverage of first %d natural nos.=%d",n,avg);
        getch();
    }