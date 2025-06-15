#include<stdio.h>
int main()
{
float a,b;
float arithmatic,hormonic;

printf("Enter the two Number");
scanf("%f%f",&a,&b);

arithmatic=(a+b)/2;
hormonic=2*a*b/(a+b);

printf("Show the arithmatic %.2f",arithmatic);
printf("\n show the hormonic %2.f",hormonic);

return 0;


}