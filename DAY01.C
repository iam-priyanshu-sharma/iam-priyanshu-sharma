/*Program to print the name of day by using else...if...ladder*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int code;
     clrscr();
     printf("Enter a code:");
     scanf("%d",&code);
     if(code==1)
	printf("Sunday");
      else if(code==2)
	     printf("Monday");
	   else if(code==3)
		   printf("Tuesday");
		 else if(code==4)
			 printf("Wednesday");
		       else if(code==5)
			       printf("Thursday");
			     else if(code==6)
				     printf("Friday");
				   else if(code==7)
					   printf("Saturday");
					else
					    printf("Invalid code");
      getch();
      }
