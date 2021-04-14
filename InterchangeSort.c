/*Program to show the use of Interchange*/
#include<stdio.h>
#include<conio.h>
void main()
    {
        int a[10],i,j,temp;
        printf("Enter 10 elements of array:");
        for(i=0;i<10;i++)
           scanf("%d",&a[i]);
        printf("Elements of array before sorting:");
        for(i=0;i<10;i++)
           printf("%d\t",a[i]);
        for(i=0;i<9;i++)
           {
               for(j=i+1;j<10;j++)
                  if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
           }
        printf("\nElements of array after sorting:");
        for(i=0;i<10;i++)
           printf("%d\t",a[i]);
        getch();
    }          