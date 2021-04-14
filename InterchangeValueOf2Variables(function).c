/*Program to interchange the value of 2 variables using a function*/

void interchange(int *,int *);  
void main()
    {
        int x,y;
        system("cls");
        printf("Enter value of x and y:");
        scanf("%d%d",&x,&y);
        printf("\nBefore interchange\nx=%d\ny=%d",x,y);
        interchange(&x,&y);
        printf("\nAfter interchange\nx=%d\ny=%d",x,y);
        getch();
    }
void interchange(int *a,int *b)
     {
         int t;
         t=*a;
         *a=*b;
         *b=t;
     }    