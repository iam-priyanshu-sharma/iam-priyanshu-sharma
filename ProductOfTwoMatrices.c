/*Program to find product of two matrices*/
#include<stdio.h>    
#include<conio.h>  
void main()
   {  
       int a[10][10],b[10][10],mul[10][10],r1,r2,c1,c2,i,j,k;
       system("cls");  
       printf("Enter order of 1st matrix:");    
       scanf("%d%d",&r1,&c1);    
       printf("Enter elements of 1st matrix:"); 
       for(i=0;i<r1;i++)    
          {    
              for(j=0;j<c1;j++)    
                 {    
                    scanf("%d",&a[i][j]);    
                 }    
          } 
       printf("Enter order of 2nd matrix:");
       scanf("%d%d",&r2,&c2);      
       printf("Enter elements of 2nd matrix:");    
       for(i=0;i<r2;i++)    
          {    
             for(j=0;j<c2;j++)    
                {    
                    scanf("%d",&b[i][j]);    
                }    
          }    
    
       printf("Product of the matrix=\n");    
       for(i=0;i<r1;i++)    
          {    
              for(j=0;j<c1;j++)    
                 {    
                     mul[i][j]=0;    
                     for(k=0;k<c1;k++)    
                        {    
                            mul[i][j]+=a[i][k]*b[k][j];    
                        }    
                 }    
          }      
       for(i=0;i<r2;i++)    
          {    
             for(j=0;j<c2;j++)    
                {    
                    printf("%d\t",mul[i][j]);    
                }    
             printf("\n");    
          }    
       getch();  
   }