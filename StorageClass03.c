#include<stdio.h>
#include<conio.h>
int x=1;
void main()
    {
        system("cls");
        printf("x=%d",x);
        x=x+5;
            {
                int x=20;
                printf("\nx=%d",x);
                x=x+5;
            }
        printf("\nx=%d",x);
        getch();    
    }