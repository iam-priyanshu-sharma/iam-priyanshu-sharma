/*Program to check that a no. is prime or not using recursive function*/
#include<stdio.h>
#include<conio.h>
int isPrime(int,int);
void main()
    {
        int num,prime;
        system("cls");
        printf("Enter a Positive no.:");
        scanf("%d",&num);
        prime=isPrime(num,num/2);
        if(prime==1)
          printf("%d is a prime number",num);
        else 
            printf("%d isn't a prime number",num);
        getch();      
    }
int isPrime(int num,int i)
           {
               if(i==1)
                 return 1;
               else if(num%i==0)
                      return 0;
                    else 
                        isPrime(num,i-1);        
           }    