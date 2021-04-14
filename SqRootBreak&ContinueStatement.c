/*Program to find the square root of n number entered by the user using break & continue statement*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
    {
        int n;
        float sq;
        while(1)
             {
                 printf("\nEnter a number:");
                 scanf("%d",&n);
                 if(n<0)
                   {
                       printf("Negative no. square root can't be calculated.");
                       continue;
                   }
                 if(n==0)
                   {
                       printf("Bye bye....");
                       break;
                   }  
                 sq=sqrt(n);
                 printf("\nSquare root of %d=%f",n,sq);  
             }
        getch();     
    }