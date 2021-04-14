/*Program to substract two matrices*/
#include<stdio.h>
#include<conio.h>
void main()
    {
       int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j;
       printf("Enter order of 1st matrix:");
       scanf("%d%d",&r1,&c1);
       printf("Enter elements of 1st matrix:");
       for(i=0;i<r1;i++)
          for(j=0;j<c1;j++)
             scanf("%d",&a[i][j]);
       printf("1st matrix is:\n");
       for(i=0;i<r1;i++)
          {
              for(j=0;j<c1;j++)
                 printf("%d\t",a[i][j]);
              printf("\n");   
          }      
       printf("Enter order of 2nd matrix:");
       scanf("%d%d",&r2,&c2);
       printf("Enter elements of 2nd matrix:");
       for(i=0;i<r2;i++)
          for(j=0;j<c2;j++)
             scanf("%d",&b[i][j]);
       printf("2nd matrix is:\n");
       for(i=0;i<r2;i++)
          {
              for(j=0;j<c2;j++)
                 printf("%d\t",b[i][j]);
              printf("\n");
          }
        if(r1==r2 && c1==c2)
          {
             for(i=0;i<r1;i++)
             for(j=0;j<c1;j++)
                c[i][j]=a[i][j]-b[i][j];
             printf("\nResultant matrix is:\n");
             for(i=0;i<r2;i++)
                {
                    for(j=0;j<c2;j++)
                        printf("%d\t",c[i][j]);
                    printf("\n");   
                }      
          }    
        else 
            printf("Substraction not possible.");    
       getch();         
    }