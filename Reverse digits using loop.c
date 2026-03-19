//Write a program to reverse the digits of a no. using loop.
#include <stdio.h>
int main() 
{
int n,r,m=0;
printf("Enter the number : ");
scanf("%d", &n); 
while (n != 0) 
{
    r=n%10;
    m=m*10+r;
    n=n/10;
}
printf("reversed number is %d \t",m);
 return 0;
}
