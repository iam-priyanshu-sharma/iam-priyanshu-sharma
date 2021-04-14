/*Program to print a specific character pattern*/
#include<stdio.h>
#include<conio.h>
int main()
    {
     int i,j,x=64,x1;
     for(i=1;i<=5;i++)
         {
          x1=x=x+i;
          for(j=1;j<=i;j++)
              printf("%c ",x1--);
          printf("\n");
         }
      return  0;
    }
