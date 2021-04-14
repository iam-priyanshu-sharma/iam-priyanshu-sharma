/*Program to input n numbers and find the sum,average,largest no. and smallest no.*/
#include<stdio.h>
int  main()
     {
       int n,i,sum=0,l,s,N;
       float avg;
       printf("Enter N numbers:");
       scanf("%d",&N);
       for(i=1;i<=N;i++)
           {
             scanf("%d",&n);
             sum=sum+n;
             if(i==1)
                l=s=n;
             else
                  {
                   if(n>1)
                      l=n;
                   if(n<s)
                      s=n;
                  }
           }
       avg=sum/N;
       printf("\nSum of numbers:%d",sum);
       printf("\nAverage of numbers:%f",avg);
       printf("\nLargest numbers=%d",l);
       printf("\nSmallest number=%d",s);
       return 0;
     }