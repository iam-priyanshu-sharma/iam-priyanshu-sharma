/*Program to display the elements of two dimensional array*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int i,j;
        int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        system("cls");
        printf("Elements of an array:\n");
        for(i=0;i<3;i++)
           {
                for (j=0;j<3;j++)
                printf ("%d\t",a[i][j]);
           }
        printf("\n"); 
        getch();
    }