/*Program to enter a no. in deciaml no. system and convert it into binary,octal and hexadeciaml no. system without using format*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int n,n1;
        long int bin=0,m=1,oct;
        printf("Enter a decimal number:");
        scanf("%d",&n);
        n1=n;
        while(n1>0)
             {
                 bin=bin+m*(n1%2);
                 n1=n1/2;
                 m=m*10;
             }
        printf("\nBinary equivalent of %d=%ld",n,bin);

        n1=n;
        m=1;
        while(n1>0)
             {
                 oct=oct+m*(n1%8);
                 n1=n1/8;
                 m=m*10;
             }
        printf("\nOctal equivalent=%ld",oct);
        printf("\nOctal equivalent using format=%o",n);
        printf("\nHexadeciaml equivalent=%x",n);
        getch();          
    }
