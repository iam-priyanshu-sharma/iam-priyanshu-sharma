/*Program in c to find the L.C.M. and H.C.F. of two integers using recursive function*/
#include<stdio.h>
#include<conio.h>
long int hcf(long int,long int);
void main()
    {
        long int number1,number2,gcd,lcm;
        system("cls");
        printf("Enter two integer no.:");
        scanf("%ld%ld",&number1,&number2);
        gcd=hcf(number1,number2);
        lcm=(number1*number2)/gcd;
        printf("\nH.C.F. of %ld and %ld= %ld",number1,number2,gcd);
        printf("\nL.C.M. of %ld and %ld= %ld",number1,number2,lcm);
        getch();
    }
long int hcf(long int a,long int b)
            {
                if(b==0)
                  return a;
                else 
                    return hcf(b,a%b);   
            }    