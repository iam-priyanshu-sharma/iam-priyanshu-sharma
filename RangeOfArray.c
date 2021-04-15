/*Program to create an array of 10 elements,insert elements into the array then find the range of the array(diff of smallest and largest element)*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int i,a[10],large,small,range;
        system("cls");
        printf("\nEnter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        large=a[0];
        small=a[0];
        for(i=1;i<10;i++)
           {
               if(a[i]>large)
                 large=a[i];
               else if(a[i]<small)
                      small=a[i];  
           }
        range=large-small;
        printf("\nRange of array is:%d",range);
        getch();      
    }