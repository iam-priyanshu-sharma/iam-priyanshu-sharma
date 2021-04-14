/*Program to find the value of a^b. The value of a and b will be entered through the keyboard*/
#include<stdio.h>
#include<conio.h>
int main()
    {
      int a,b,i;
      float c=1.0;
      printf("Enter two numbers:");
      scanf("%d%d",&a,&b);
      if(b>0)
         for(i=1;i<=b;i++)
             c=c*a;
      else
           for(i=-1;i>=b;i--)
                c=c/a;
       printf("Power of %d^%d=%f",a,b,c);
       return 0;
    }
