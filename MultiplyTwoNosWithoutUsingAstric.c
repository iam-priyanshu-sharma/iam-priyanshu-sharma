#include<stdio.h>
int main()
{
    int a,b,c=0,j,i=1,c1;
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    do
    {
        c=a+c;
        i++;
    } while(i<=b);
    // for(i=1;i<=b;i++)
    // {
    //    c=a+c;      
    // }
   printf("The product of two no.=%d",c);
   return 0;
}