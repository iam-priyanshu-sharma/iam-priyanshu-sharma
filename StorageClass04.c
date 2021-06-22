#include<stdio.h>
#include<conio.h>
void main()
    {
        void show();
        extern float x;
        system("cls");
        printf("\nx=%f",x);
        x=x+5;
        show();
        printf("\nx=%f",x);
        getch();
    }
float x=1.0;
void show()
    {
        printf("\nx=%f",x);
        x=x+5;
    }    