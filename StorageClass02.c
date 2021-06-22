#include<stdio.h>
#include<conio.h>
void print();
void main()
     {
         system("cls");
         print();
         print();
         print();
         print();
         print();
         print();
         getch();
     }
void print()
    {
        static float x=1.0;
        printf("\nx=%f",x);
        x=x+1.0;
    }     