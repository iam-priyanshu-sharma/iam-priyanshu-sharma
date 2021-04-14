/*Program to find the H.C.F. of 2 nos. entered by the user using a function(with argument with return)*/
#include<stdio.h>
#include<conio.h>
int hcf(int,int);
void main()
    {
        int a,b,h;
        system("cls");
        printf("Enter two nos:");
        scanf("%d%d",&a,&b);
        h=hcf(a,b);
        printf("H.C.F.=%d",h);
        getch();
    }
int hcf(int x,int y)
       {
           int i,h;
           for(i=1;i<=x && i<=y;i++)
              if(x%i==0 && y%i==0)
                 h=i;
           return h;      
       }    