/*Program to create a matrix of m*n order and display their elements along with sum of each row and each column*/
#include<stdio.h>
#include<conio.h>
void main()
    {
       int a[3][4], i, j, sum, s[4]={0};
       system("cls");
       printf ("\nEnter elements of matrix\n");
       for(i=0;i<3;i++)
          for(j=0;j<4;j++)
       scanf("%d",&a[i][j]);
       printf("\nThe matrix is:\n");
       printf("\tCol 0   Col 1   Col 2   Col 3   Sum");
       for(i=0;i<3;i++)
          {
             printf("\nRow %d",i);
             sum=0;
             for(j=0;j<4;j++)
                {
                    sum=sum+a[i][j];
                    printf("\t%d",a[i][j]);
                    s[j]=s[j]+a[i][j];
                }
             printf("\t%d",sum);
          }
       printf("\nSum");
       for(i=0;i<4;i++)
          printf("\t%d",s[i]);
       getch();
    }