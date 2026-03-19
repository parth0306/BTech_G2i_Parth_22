/*Write a program to calculate the area and circumference of a circle .*/
#include <stdio.h>
int main ()
{
float r;    
printf("Enter the radius of the circle :\t");
scanf("%f",&r);
printf("Area of the circle = \t%f\n", 3.14*r*r);
printf("Circumference of the circle =\t%f", 2*3.14*r);
return 0;

}
