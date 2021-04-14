/*Program to create an array pf 10 elements and input elements into it and display the elements in in-order and reverse order*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10],i;
        printf("Enter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        printf("Elements of array in in-order:");
        for(i=0;i<10;i++)
            printf("\t%d",a[i]);
        printf("\nElements of array in reverse-order:");
        for(i=9;i>=0;i--)
            printf("\t%d",a[i]);
        getch();           
    }