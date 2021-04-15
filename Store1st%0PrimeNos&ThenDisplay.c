/*Program to store 1st 50 prime numbers into an array then display them*/
#include<stdio.h>
#include<conio.h>
void main()
    {
         int i,j=0,k,n,a[50],prime;
         system("cls");
         for(i=1;j<50;i++)
            {
                 prime= 1;
                 if(i%2==0 && i!=2)
                    prime=0;
                 else
                    {
                        for(k=3;k*k<=i;k=k+2)
                        if(i%k==0)
                          {
                            prime= 0;
                            break;
                          }
                    }
                 if(prime)
                 a[j++]=i;
            }
        printf("\nFirst fifty prime numbers are:");
        for(i=0;i<50;i++)
        printf("\t%d",a[i]);
        getch();
    }