//write a program that accepts the marks of 5 subjets and finds the sum and percentage marks obtained by the student
#include <stdio.h>
int main()
{
float s1,s2,s3,s4,s5,sum,percentage;
int maxmarks;
printf("enter the marks obtained by any five subjects :\n");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
printf("maximun marks of the subject :\t");
scanf("%d",&maxmarks);
maxmarks *= 5;
sum=s1+s2+s3+s4+s5;
percentage=(sum/maxmarks)*100;
printf("sum of their marks = %f\n",sum);
printf("percentage of their marks = %f",percentage);
return 0;
}
