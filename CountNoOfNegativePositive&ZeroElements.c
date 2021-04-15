/*Program to create an array of 10 elements,insert elements into the array then count the number of negative,positive and zero elements*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10];
        int pos=0,neg=0,zero=0,i;
        system("cls");
        printf("Enter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        printf("Entered elements are:");
        for(i=0;i<10;i++)
            printf("\t%d",a[i]);
        for(i=0;i<10;i++)
           if(a[i]>0)
             pos++;
           else if(a[i]<0)
                  neg++;
           else  
               zero++;
        printf("\nNo. of positive elements=%d",pos);
        printf("\nNo. of negative elements=%d",neg);
        printf("\nNo. of zero elements=%d",zero);
        getch();                        
    } 