/*Program to enter marks of 5 subjects of a student*/
#include<stdio.h>
#include<conio.h>
void main()
     {
     int s1,s2,s3,s4,s5,Total;
     float Percentage;
     clrscr();
     printf("\nEnter obtained marks in 5 subjects:");
     scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
     Total=s1+s2+s3+s4+s5;
     printf("\nTotal marks=%d\n",Total);
     Percentage=Total*0.2;
     printf("Student get %.2f percentage.\n",Percentage);
     if(Percentage>=75)
	printf("1st class with distinction");
     else if(Percentage>=60 && Percentage<75)
	    printf("1st class");
     else if(Percentage>=45 && Percentage<60)
	    printf("2nd class");
     else if(Percentage>=35 && Percentage<45)
	    printf("3rd class");
     else if(Percentage<30)
	    printf("Fail");
     getch();
     }