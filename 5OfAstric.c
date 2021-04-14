/*Program to print 5 using astric*/
#include<stdio.h>
int main()
   {
       int i,j;
       for(i=1;i<=7;i++)
          {
              for(j=1;j<5;j++)
              if(i==1 || i==4 || i==7 || i<4 && j==1 || i>4 && j==4)
                 printf("* ");
              else
                 printf("  ");
              printf("\n");      
          }
       return 0;   
   }