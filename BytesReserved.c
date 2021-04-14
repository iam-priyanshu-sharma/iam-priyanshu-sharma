/*Program to print bytes reserved for various types of data and space required for storing them in memory using array*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10];
        char c[10];
        float b[10];
        system("cls");
        printf("\nThe type int requires %d bytes",sizeof(int));
        printf("\nThe type char requires %d bytes",sizeof(char));
        printf("\nThe type float requires %d bytes",sizeof(float));
        printf("\n%d memory locations are reserved for ten int elements",sizeof(a));
        printf("\n%d memory loactions are reserved for ten char elements",sizeof(c));
        printf("\n%d memory locations are reserved for ten float elements",sizeof(b));
        getch();
    }