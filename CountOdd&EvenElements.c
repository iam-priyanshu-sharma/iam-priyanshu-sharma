/*Program to create an array for 10 elements,insert elements into the array then count the no. of odd and even elements*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10];
        int odd=0,even=0,i;
        system("cls");
        printf("Enter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        printf("Entered elements are:");
        for(i=0;i<10;i++)
           printf("\t%d",a[i]);
        for(i=0;i<10;i++)
           if(a[i]%2==0)
             even++;
           else 
               odd++;
        printf("\nNo. of even elements=%d",even);
        printf("\nNo. of odd elements=%d",odd);
        getch();                
    }