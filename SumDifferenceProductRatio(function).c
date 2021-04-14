/*Program to find the sum,difference,product,ratio of two nos. entered by the user with the help of only one function(multiple return type)*/
#include<stdio.h>
#include<conio.h>
void calculate(int,int,int*,int*,int*,float*);
void main()
    {
        int a,b,s,d,p;
        float r;
        system("cls");
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        calculate(a,b,&s,&d,&p,&r);
        printf("\nSum=%d",s);
        printf("\nDifference=%d",d);
        printf("\nProduct=%d",p);
        printf("\nRatio=%f",r);
        getch();
    }
void calculate(int x,int y,int *s,int *d,int *p,float *r)
              {
                  *s=x+y;
                  *d=x>y?x-y:y-x;
                  *p=x*y;
                  *r=(float)x/y;
              }    