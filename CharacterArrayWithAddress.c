/*Program to display character array with their address*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int i=0;
        char name[10]={'A','R','R','A','Y'};
        system("cls");
        printf("\nCharacter\tMemory locations\n");
        while(name[i]!="\0")
              {
                  printf("\n[%c]\t\t[%u]",name[i],&name[i]);
                  i++;  
              }    
        getch();       
    }