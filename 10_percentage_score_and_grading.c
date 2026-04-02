#include <stdio.h>
int main()
{
float s1,s2,s3,s4,s5,sum,per;
int maxmarks;
printf("enter the marks obtained by any five subjects :\n");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
printf("maximun marks of the subject :\t");
scanf("%d",&maxmarks);
maxmarks *= 5;
sum=s1+s2+s3+s4+s5;
per=(sum/maxmarks)*100;
printf("percentage of their marks = %f\n",per);
if(per>=90 && per<=100)
    {printf("grade A");}
else if(per>=80 && per<90)
    {printf("grade B");}
else if(per>=60 && per<80)
    {printf("grade C");}
else printf("grade D");

return 0;
}
