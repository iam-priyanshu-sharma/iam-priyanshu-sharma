/*Program to create an array of 10 elements,insert elements into the array then find the second largest element of the array*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int i,a[10],first,second;
        system("cls");
        printf("\nEnter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        if(a[0]>a[1])
          {
              first=a[0];
              second=a[1];
          }
        else 
            {
                first=a[1];
                second=a[0];
            }     
        for(i=2;i<10;i++)
           {
               if(a[i]>first)
                 {
                     second=first;
                     first=a[i];
                 }
               else if(a[i]>second)
                      second=a[i];  
           }    
        printf("\nSecond largest element in array is:%d",second);
        getch();   
    }