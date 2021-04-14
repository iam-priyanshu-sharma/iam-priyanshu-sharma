#include<stdio.h>
#include<conio.h>
void main()
   {
       long int bin,bin1,m=1;
       int dec=0;
       printf("Enter a binary number:");
       scanf("%ld",&bin);
       bin1=bin;
       while(bin1>0)
             {
                 dec=dec+m*(bin1%10);
                 bin1=bin1/10;
                 m=m*2;
             }
       printf("\nDecimal equivalent of %ld=%d",bin,dec);
       getch();      
   }