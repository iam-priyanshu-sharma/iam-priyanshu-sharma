/*Program to convert decimal to octal*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int octNum[10],n,i,j;
        printf("Enter a decimal no. you want to convert:");
        scanf("%d", &n);
        for (i = 0; n > 0; i++)
           {
              octNum[i] = n % 8;
              n = n / 8;
           }
        printf("\nOctal No.= ");
        for (j = i - 1; j >= 0; j--)
            {
                printf("%d", octNum[j]);
            }
        getch();
    }