//write a program that swaps values of two variables using a third variable.
#include <stdio.h>
int main()
{
int a,b,c;
printf("enter first number :\t");
scanf("%d",&a);
printf("\nEnter second number :\t ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("\nValue of first number :%d",a);
printf("\nValue of second number :%d",b);
return 0;    
}
