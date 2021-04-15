/*Program to print the binary equivalent of a decimal number using an array*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int bin[16],i=0,n;
        system("cls");
        printf("\nEnter a decimal no.:");
        scanf("%d",&n);
        while(n>0)
            {
                bin[i++]=n%2;
                n=n/2;
            }
        printf("\nBinary equivalent of the given number:");
        for(i=i-1;i>=0;i--)
        printf("%d",bin[i]);
        getch();
    }