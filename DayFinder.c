/*Program to find  day on 1st of january in year input by user*/
#include<stdio.h>
#include<conio.h>
int main()
    {
     int year,days;
     printf("Enter a year:");
     scanf("%d",&year);
     days=(year-2000)*365+(year-2000)/4+1;
     switch(days%7)
              {
                case 0:printf("Saturday");
                         break;
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
              }
     return 0;
    }
