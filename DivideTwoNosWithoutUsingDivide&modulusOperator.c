#include<stdio.h>
#include<conio.h>
void main()
   {
       int x,y,rem,i;
       printf("Enter two numbers:");
       scanf("%d%d",&x,&y);
       i=0;
       while(x>=y)
            {
                x=x-y;
                i++;
            }
       rem=x;
       printf("Quotient=%d",i);
       printf("\nRemainder=%d",rem);
       getch();     
   }
