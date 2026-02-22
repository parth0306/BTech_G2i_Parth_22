//Write a program that calculate the sample interest and compound interest . The principal amount, rate of interest and time are entered through the keyboard.
#include <stdio.h>
int main() {
float principal, rate, time, simple_interest, compound_interest, amount;
    printf("\nEnter principal amount: ");
    scanf("%f", &principal);
    printf("\nEnter annual rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("\nEnter time (in years): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;
    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}

