/*C program to read A (m × n). Find the transpose of a given matrix and output both the input or transpose matrix using another matrix*/
#include<stdio.h>
#include<conio.h>
void main ()
    {
        int i,j,m,n;
        int A[10][10],B[10][10];
        system("cls");
        printf("Enter the order of matrix A:");
        scanf("%d%d",&m,&n);
        printf("\nEnter the elements of matrix:");
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                    scanf("%d",&A[i][j]);
            }
        printf("\nMatrix A is:\n");
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                    printf("%3d",A[i][j]);
                printf("\n");
            }
        for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                B[i][j]=A[j][i];
            }
        printf("\nThe transposed matrix B is:\n");
        for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                    printf("%3d",B[i][j]);
                printf("\n") ;
            }    
        getch();    
    }