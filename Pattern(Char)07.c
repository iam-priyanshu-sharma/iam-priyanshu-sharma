/*Program to print a specific character pattern*/
#include<stdio.h>
int main()
   {
       int i,j,x;
       for(i=1;i<=8;i++)
          {
              x=65;
              for(j=1;j<=9-i;j++)
                 printf(" %c",x++);
              for(j=1;j<=2*i-3;j++)
                 printf("  ");
              if(i==1)
                x=x-2;
              else
                  x=x-1;
              while(x>=65)
                   printf(" %c",x--);
              printf("\n");                 
          }
       return 0;   
   }