/*Program to convert decimal no. into hexadecimal no.*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int hex[16],n,i,j;
        printf("Enter a decimal no. you want to convert:");
        scanf("%d",&n);
        for(i=0;n>0;i++)
           {
               hex[i]=n%16;
               n=n/16;
           }
        printf("\nHexadecimal No.= ");
        for(j=i-1;j>=0;j--)
           if(hex[j]<10)
             printf("%d",hex[j]);
           else
               printf("%c",55+hex[j]);
        getch();         
    }