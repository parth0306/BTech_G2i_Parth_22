#include <stdio.h>
int main()
{   char op;
    float a,b,r;
    printf("Enter any two no.s : \n");
    scanf("%f%f",&a,&b);
    printf("Enter any operator : \n");
    scanf(" %c",&op);
    switch (op)
    {   case '+':
            r=a+b;
            printf("Addition : %f",r);
            break;
        case '-':
            r=a-b;
            printf("Subtraction : %f",r);
            break;
        case '*':
            r=a*b;
            printf("Multiplication : %f",r);
            break;
        case '/':
            r=a/b;
            printf("Division : %f",r);
            break;
        default: printf("Wrong choice,ERROR");
    }    return 0;
}
