/*Program to find sum and differentiation of two nos. using return statement*/
#include<stdio.h>
#include<conio.h>
int add(int,int);
int diff(int,int);
void main()
     {
         int a,b,s,d;
         printf("Enter two numbers:");
         scanf("%d%d",&a,&b);
         s=add(a,b);
         printf("\nThe sum=%d",s);
         d=diff(a,b);
         printf("\nThe difference=%d",d);
         getch();
     }
int add(int x,int y)
        {
            int s;
            s=x+y;
            return s;
        }     
int diff(int x,int y)
         {
             int d;
             d=x-y;
             return d;
         }        