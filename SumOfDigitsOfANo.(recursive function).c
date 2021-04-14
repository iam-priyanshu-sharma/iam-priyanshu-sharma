/*Program to find the sum of digits of a no. using recursive function*/

int sum(int);
void main()
    {
        int n,s;
        system("cls");
        printf("Enter a no.:");
        scanf("%d",&n);
        s=sum(n);
        printf("Sum of digits=%d",s);
        getch();
    }
int sum(int x)
       {
           if(x==0)
             return 0;
           else
               return(x%10+sum(x/10));  
       }    