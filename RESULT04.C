/*Program to enter the obtained marks,percentage of a student and print the C.G.P.A.*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     float marks;
     clrscr();
     printf("Enter marks of student:");
     scanf("%f",&marks);
     switch((int)(marks/10))
	   {
	   case 10:
	   case 9:printf("C.G.P.A.=10");
		  break;
	   case 8:printf("C.G.P.A.=9");
		  break;
	   case 7:printf("C.G.P.A.=8");
		  break;
	   case 6:printf("C.G.P.A.=7");
		  break;
	   case 5:printf("C.G.P.A.=6");
		  break;
	   case 4:printf("C.G.P.A.=5");
		  break;
	   case 3:printf("C.G.P.A.=4");
		  break;
	   default:printf("Fail");
	   }
     getch();
     }