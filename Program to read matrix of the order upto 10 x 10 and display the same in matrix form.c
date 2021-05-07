/*Program to read the matrix of the order upto 10 x 10 elements and display the same in matrix form*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int i,j,row,col,a[10][10];
        system("cls");
        printf("Enter Matrix Order upto (10 x 10) A:");
        scanf("%d%d",&row,&col);
        printf("\nEnter Elements of matrix A:");
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                scanf("%d",&a[i][j]);
        printf("\nThe matrix is:\n");
        for(i=0;i<row;i++)
           {
                for(j=0;j<col;j++)
                    printf("%d\t",a[i][j]);
                printf("\n");
           }       
        getch();
    } 