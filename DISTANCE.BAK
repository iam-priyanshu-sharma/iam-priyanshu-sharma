/*Program to convert the distance given in kilometer to mile,yard,feet and inches*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     float km,cm;
     long int mile,yard,feet,inch;
     clrscr();
     printf("Enter the distance in km:");
     scanf("%f",&km);
     cm=km*1000.0*100.0;
     printf("\nCm=%f",cm);
     inch=cm/2.54;
     printf("\nInch=%ld",inch);
     feet=inch/12;
     printf("\nFeet=%ld",feet);
     inch=inch%12;
     yard=feet/3;
     printf("\nYard=%ld",yard);
     feet=feet%3;
     mile=yard/1760;
     yard=yard%1760;
     printf("\nDistance=%ld mile %ld yard %ld feet %ld inch",mile,yard,feet,inch);
     getch();
     }