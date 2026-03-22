//write a program to check if the given two numbers are equal or not.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number :\t");
    scanf("%d",&a);
    printf("\nEnter second number :\t ");
    scanf("%d",&b);
    if (a==b){printf("Both are equal");}
    else printf("Not equal");
    return 0;
}
