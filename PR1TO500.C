/*Program to find all prime numbers from 1 to 500*/
#include<stdio.h>
#include<conio.h>
void main()
    {
     int i,j,numX,numY,flag=0;
     clrscr();
     printf("Enter two numbers:");
     scanf("%d%d",&numX,&numY);
     printf("All Prime numbers between %d and %d are: \n",numX,numY);
     for(i=numX;i<=numY;i++)
	{
	 for(j=2;j<i;j++)
	    {
	     if(i%j==0)
	       {
		flag=0;
		break;
	       }
	       flag=1;
	    }
	     if(flag==1)
		printf("%d,",i);
	}
     getch();
    }
