//Write a program that finds whether a given number is even or odd.
#include <stdio.h>
int main()
{int num;

    printf("enter a positive integer :");
    scanf("%d",&num);
    if (num%2 == 0){printf("its even");}
    else printf("its odd");
    return 0;
}
