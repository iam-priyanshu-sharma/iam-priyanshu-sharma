/*Program to create an array of 10 elements.Insert 10 elements into the array then find the largest and smallest elements of the array*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10],i,l,s;
        printf("Enter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        s=l=a[0];
        for(i=0;i<10;i++)
           {
               if(a[i]>l)
                 l=a[i];
               if(a[i]<s)
                 s=a[i];  
           }
        printf("Largest element=%d",l);
        printf("\nSmallest element=%d",s);
        getch();      
    }