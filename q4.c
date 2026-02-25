//write a program that accept centigrate temperature and convert it into fahrenheit.
#include <stdio.h>
int main()
{
    float c,f;
    printf("enter temperature in cantigrade :");
    scanf("\n%f",&c),
    f=(9*c/5)+32 ;
    printf("required temperature in fahrenheit : %f",f);
    return 0;
}
