/*Program to show the use of bubblesort*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10],i,j,temp;
        printf("Enter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        printf("Elements of array before sorting:");
        for(i=0;i<10;i++)
           printf("%d\t",a[i]);
        for(i=0;i<9;i++)
           {
               for(j=0;j<9;j++)
                  if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
           }   
        printf("\nElements of array after sorting:");
        for(i=0;i<10;i++)
           printf("%d\t",a[i]);
        getch();      
    }