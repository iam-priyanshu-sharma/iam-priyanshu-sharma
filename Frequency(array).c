/*Program to find the frequency of an element in an array*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10],i,ele,count=0;
        printf("\nEnter 10 elements of array:\n");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        printf("\nEnter the element to be searched:");
        scanf("%d",&ele);
        for(i=0;i<10;i++)
           if(a[i]==ele)
             count++;
        if(count==0)
          printf("The elements is not present in the array.");
        else 
            printf("The elements is present at %d position in the array.",count);
        getch();             
    }