/*C program to find the trace of a given square matrix of order m x m*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10][10],r,c,i,j,sum=0;
        system("cls");
        printf("Enter order of the matrix(upto 10x10):");
        scanf ("%d%d",&r,&c);
        printf("\nEnter elements of matrix:");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&a[i][j]);
        printf("\nThe matrix is:\n");
        for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                    printf("%d\t",a[i][j]);
                printf ("\n");
            }
        if(r==c)
            {
                for(i=0;i<r;i++)
                sum=sum+a[i][i];
                printf("\nTrace of the matrix=%d",sum);
            }
        else
            printf("\nNot a square matrix.It isn't possible to find trace.");
        getch();
    }