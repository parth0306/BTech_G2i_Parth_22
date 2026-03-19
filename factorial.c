//Write a program to find factorial of a given number.
#include <stdio.h>
int main() {
    int n,i,product=1;
    printf("Enter the number:\n ");
    scanf("%d", &n);
    printf("Factorial:\n ");
    for (i = 1; i <= n; i++) 
    {   product=product*i; }
        printf("%d",product);
    return 0;
}
