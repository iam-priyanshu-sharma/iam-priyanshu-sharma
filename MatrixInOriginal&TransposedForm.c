/*Program to insert the elements of a matrix of 3*4 order and display it in original and transposed form*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[3][4],i,j;
        printf("Enter elements of matrix:");
        for(i=0;i<3;i++)
           for(j=0;j<4;j++)
              scanf("%d",&a[i][j]);
        printf("The matrix you entered is:\n");
        for(i=0;i<3;i++)
           {
               for(j=0;j<4;j++)
                  printf("%d\t",a[i][j]);
               printf("\n");   
           }
        printf("The transposed matrix is:\n");
        for(i=0;i<4;i++)
           {
               for(j=0;j<3;j++)
                  printf("%d\t",a[j][i]);
               printf("\n");   
           }
        getch();            
    }