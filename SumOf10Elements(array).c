/*Program to create an array of 10 elements.Instert elements into the array then find the sum of elements*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10],i,sum=0;
        printf("Enter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        for(i=0;i<10;i++)
           sum=sum+a[i];
        printf("\nSum of elements=%d",sum);
        getch();      
    }