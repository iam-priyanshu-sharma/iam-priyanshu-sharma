/*Program to find the H.C.F. of 2 numbers entered by the user*/
#include<stdio.h>
#include<conio.h>
int main()
     {
       int i,a,b,h;
       printf("Enter two nos:");
       scanf("%d%d",&a,&b);
       for(i=1;i<=a && i<=b;i++)
           if(a%i==0 && b%i==0)
              h=i;
       printf("H.C.F.=%d",h);
       return 0;
     }
