/*Program to find the sum of the terms*/
#include<stdio.h>
#include<conio.h>
void main()
   {
       int n;
       double i,s=0.0;
       printf("Enter numbers of terms:");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
          s=s+1/i;
       printf("\nSum is %f",s);
       getch();   
   }