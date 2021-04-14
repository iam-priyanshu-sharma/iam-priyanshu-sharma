/*Program to find the square root of n number entered by the user using goto statement*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
    {
        int n;
        float sq;
        INPUT:
           printf("\nEnter a number:");
           scanf("%d",&n);
           if(n<0)
             {
                 printf("Negative no. square root can't be calcuate.");
                 goto INPUT;
             }
           if(n==0)
              goto END;
              sq=sqrt(n);
              printf("\nSquare root of %d=%f",n,sq);
              goto INPUT;
        END:
           printf("Bye bye....");
        getch();           
    }