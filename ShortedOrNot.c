/*Program to check that an array is shorted or not*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10],n,i,sorted=1;
        printf("Enter no. of elements:");
        scanf("%d",&n);
        printf("\nEnter %d elements of array:",n);
        for(i=0;i<n;i++)
           scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
           if(a[i]>a[i+1])
             {
                 sorted=0;
                 break;
             }   
        if(sorted==1)
           printf("\nArray is sorted.");
        else 
            printf("\nArray is unsorted.");
        getch();            
    }