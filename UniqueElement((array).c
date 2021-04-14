/*Program to check that an array consists of unique elements or not*/
#include<stdio.h>
#include<conio.h>
void main()
     {
         int a[10],i,n,j,unique=1;
         printf("Enter no.of elements:");
         scanf("%d",&n);
         printf("\nEnter %d elements of array:",n);
         for(i=0;i<n;i++)
            scanf("%d",&a[i]);
         for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                   if(a[i]==a[j])
                     {
                         unique=0;
                         break;
                     }
            }      
         if(unique==1)
           printf("\nArray has unique elements.");
         else 
             printf("\nArray has duplicate elements.");
         getch();         
     }