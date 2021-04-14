/*Program to print the name of day using switch case*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int code;
     clrscr();
     printf("Enter a code:");
     scanf("%d",&code);
     switch(code)
	   {
	   case 1:printf("Sunday");
		  break;
	   case 2:printf("Monday");
		  break;
	   case 3:printf("Tuesday");
		  break;
	   case 4:printf("Wednesday");
		  break;
	   case 5:printf("Thursday");
		  break;
	   case 6:printf("Friday");
		  break;
	   case 7:printf("Saturday");
		  break;
	   default:printf("Invalid code");
	   }
     getch();
     }
