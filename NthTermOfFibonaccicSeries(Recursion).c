/*Program to find the nth term of fabonaccic series using recursive function*/
#include<stdio.h>
#include<conio.h>
int fibo(int);
void main()
    {
        int n,t;
        system("cls");
        printf("Enter a no.:");
        scanf("%d",&n);
        t=fibo(n);
        printf("Term no %d=%d",n,t);
        getch();
    }
int fibo(int x)
        {
            if(x==1)
              return 0;
            else if(x==2)
                   return 1;
            else 
                return(fibo(x-1)+fibo(x-2));         
        } 