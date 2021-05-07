/*Program in C to create a matrix of 3 x 3 and insert elements in the matrix then display them*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int mat[3][3],i,j;
        system("cls");
        printf("Enter elements of the matrix:\n");
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                scanf("%d",&mat[i][j]);
        printf("The matrix is:\n");
        for(i=0;i<3;i++)
           {
                for(j=0;j<3; j++)
                printf("%d\t",mat[i][j]);
                printf("\n");
           }
        getch();
    }