/*Program to store all prime nos. from 1 to 500 in an array and display them*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int n,i,p,a[100],k=0;
        for(n=1;n<=500;n++)
           {
               p=1;
               if(n%2==0 && n!=2)
                  p=0;
               else for(i=3;i*i<=n;i=i+2)
                   if(n%i==0)
                      {
                          p=0;
                          break;
                      }
                if(p==1)
                 a[k++]=n;         
           }
        printf("Prime nos. from 1 to 500 are:");
        for(i=0;i<k;i++)
           printf("%d\t",a[i]);
        getch();      
    }