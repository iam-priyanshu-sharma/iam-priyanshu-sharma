/*Program to find the sum of 1st 10 natural nos. using a function(without argument with return)*/
#include<stdio.h>
#include<conio.h>
int sum();
void main()
    {
        int s;
        system("cls");
        s=sum();
        printf("\nSum of 1st 10 natural nos:=%d",s);
        getch();
    }
int sum()
    {
        int i,s=0;
        for(i=1;i<=10;i++)
            s=s+i;
        return s;    
    }    