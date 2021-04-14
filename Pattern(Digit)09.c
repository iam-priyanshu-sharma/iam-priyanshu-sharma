/*Program to print a specific digit pattern*/
#include<stdio.h>
int main()
   {
       int i,j,x=1;
       for(i=1;i<=5;i++)
          {
              for(j=1;j<=5-i;j++)
                 printf("   ");
              for(j=1;j<=i;j++)
                 printf("%3d",x++);
              printf("\n");   
          }
       return 0;  
   }