/*Program to print a string in reverse order using recursive function*/
#include<stdio.h>
#include<conio.h>
void reverseString();
void main()
     {
         system("cls");
         printf("Enter a string: ");
         reverseString();
         getch();
     }
void reverseString()
                    {
                        char c;
                        scanf("%c",&c);
                        if(c!= '\n')
                          {
                              reverseString();
                              printf("%c",c);
                          }
                    }      