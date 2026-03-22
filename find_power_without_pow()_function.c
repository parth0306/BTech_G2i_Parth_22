//Write a program to calculate power(x^y) without using pow() function.
#include <stdio.h>
int main() 
{     int n,i,result=1,p;
      printf("Enter a number : \n");
      scanf("%d", &n); 
      printf("enter power :\n");
      scanf("%d", &p); 
      for (i=1;i<=p;i++) 
      {result*=n;}
      printf("result=%d",result);
       return 0;
}
