/*Program to read the elements of the matrix of the order upto 10 x 10 and display their elements in original and transposed form*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int i,j,row,col,a[10][10];
        system("cls");
        printf("Enter order of matrix upto (10 x 10) A:");
        scanf("%d%d",&row,&col);
        printf("\nEnter Elements of matrix A:\n");
        for(i=0;i<row;i++)
           {
                for(j=0;j<col;j++)
                    scanf("%d",&a[i][j]);
           }
        printf("\nThe Matrix is:\n");
        for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                    printf("%d\t",a[i][j]);
                printf ("\n");
            }
        printf("\nThe matrix in transposed form is:\n");
        for( i=0;i<col;i++)
            {
                for(j=0;j<row;j++)
                    printf("%d\t",a[j][i]);
                printf ("\n");
            }
        getch();
    }