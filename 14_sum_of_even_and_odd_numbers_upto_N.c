//Wright a program to sum of even and odd numbers upto N
#include <stdio.h>
int main() 
{
int i, n, even_sum = 0, odd_sum = 0;
printf("Please Enter the max limit: ");
scanf("%d", &n); 
for (i = 1; i <= n; i++) 
{
if (i % 2 == 0) {even_sum +=i;} 
else {odd_sum +=i;}
}
printf("\n The Sum of Even Numbers upto %d = %d", n,even_sum);
printf("\n The Sum of Odd Numbers upto %d = %d", n,odd_sum);
 return 0;
}
