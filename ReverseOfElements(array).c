/*Program to reverse the elements of an array*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[100],i,n,reverse[100];
        printf("\nEnter No. of elements of array:\n");
        scanf("%d",&n);
        printf("Enter the elements\n");
        for(i=0;i<n;i++)
           {
               scanf("%d",&a[i]);
           }
        for(i=0;i<n;i++)
           {
               reverse[i]=a[n-i-1];
           }   
        printf("\nAfter reversing we get:\n");
        for(i=0;i<n;i++)
           {
               printf("%d ",reverse[i]);
           }   
        getch();    
    }