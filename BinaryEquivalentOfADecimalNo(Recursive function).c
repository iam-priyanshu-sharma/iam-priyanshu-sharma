/*Program to find the binary equivalent of a decimal no. using recursive function*/

void bin(int);
void main()
    {
        int n;
        system("cls");
        printf("Enter a no:");
        scanf("%d",&n);
        printf("Binary equivalent=");
        bin(n);
        getch();
    }    
void bin(int x)
        {
            if(x!=0)
              {
                  bin(x/2);
                  printf("%d",x%2);
              }
        }   
