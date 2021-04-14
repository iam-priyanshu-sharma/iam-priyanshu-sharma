/*Program to read and display the array elements using a single subscript variable*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int i ;
        float x[10];
        system("cls");
        printf("Enter 10 real numbers:");
        for(i=0;i<10;i++)
           {
                scanf("%f",&x[i]);
           }
        printf("The array elements are:");
        for(i=0;i<10;i++)
           {
                printf("%d\t",x[i]);
           }
        getch();
    }