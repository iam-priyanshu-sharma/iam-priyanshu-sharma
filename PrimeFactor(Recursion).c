/*Program to find all prime factors of a no. using recursive function*/

void factors(int,int);
void main()
    {
        int n;
        system("cls");
        printf("Enter no. to factorise:");
        scanf("%d",&n);
        printf("Prime factors of the no. are:1");
        factors(n,2);
        getch();
    }
void factors(int x,int d)
       {
           if(x>1)
              {
                  if(x%d==0)
                     {
                         printf("x%d",d);
                         factors(x/d,d);
                     }
                  else
                      factors(x,d+1);   
              }
       }    