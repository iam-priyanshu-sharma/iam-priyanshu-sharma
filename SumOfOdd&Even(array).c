/*Program to create an array of 10 elements,insert elements into the array then find the sum of odd and even elements seperately*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10];
        int sum_odd=0,sum_even=0,i;
        system("cls");
        printf("Enter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        printf("Entered elements are:");
        for(i=0;i<10;i++)
           printf("\t%d",a[i]);
        for(i=0;i<10;i++)
           if(a[i]%2==0)
             sum_even=sum_even+a[i];
           else 
               sum_odd=sum_odd+a[i];
        printf("\nSum of even elements=%d",sum_even);
        printf("\nSum of odd elements=%d",sum_odd);
        getch();                 
    }