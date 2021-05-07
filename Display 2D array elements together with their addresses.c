/*Program to display 2D array elements together with their addresses*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int i,j,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        system("cls");
        printf("Array Elements and address:\n");
        printf("        col-0     col-1     col-2");
        printf("                            \n");
        printf("Row0 ");
        for(i=0;i<3;i++)
           {
                for(j=0;j<3;j++)
                printf("%d[%u]",a[i][j],&a[i][j]);
                printf("\nRow%d ",i+1);
           }
        getch();
    }    