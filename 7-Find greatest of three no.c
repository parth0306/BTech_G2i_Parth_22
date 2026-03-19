//Write a program to find the greatest of three numbers.
#include <stdio.h>
int main()
{ int a,b,c;
printf("enter first number :\t");
scanf("%d",&a);
printf("\nEnter second number :\t ");
scanf("%d",&b);
printf("\nEnter third number :\t ");
scanf("%d",&c);
if (a>b)
    {if (a>c) printf("first number is greatest");
    else printf("third number is greatest");
    }
else 
    {if (b>c) printf("second is largest");
     else printf("third is largest");
    }
     return 0;   
}
