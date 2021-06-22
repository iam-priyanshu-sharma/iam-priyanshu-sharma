#include<stdio.h>
#include<conio.h>
void main()
    {
        int i;
        system("cls");
        for(i=1;i<=5;i++)
            print();
        getch();    
    }
void print()
     {
         static float x=1;
         printf("\nx=%f",x);
         x=x+1.0;
     }    