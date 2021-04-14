/*Program to convert decimal to binary*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10],n,i,j;
        printf("Enter a decimal no. you want to convert:");
        scanf("%d",&n);
        {        
         for(i=0;n>0;i++)
           {
               a[i]=n%2;
               n=n/2;
           }
         printf("\nBinary No.= ");
         for(j=i-1;j>=0;j--)
           {
               printf("%d",a[j]);
           }
        }
        getch();  
    }