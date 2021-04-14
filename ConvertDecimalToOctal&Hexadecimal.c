#include<stdio.h>
int main()
   {
       long int decimalNumber;
       printf("Enter a decimal number:");
       scanf("%ld",&decimalNumber);
       printf("Equivalent hexadecimal number=%X",decimalNumber);
       printf("\nEquivalent octal number=%o",decimalNumber);
       return 0;
   }


   