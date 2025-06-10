#include<stdio.h>
int main()
{
float bs,da,hra,tax,totalsalary;
printf(" enter the basic salary");
scanf("%f",&bs);

printf(" enter the daily alouns");
scanf("%f",&da);

printf(" enter the HRA");
scanf("%f",&hra);

printf(" enter the tax");
scanf("%f",&tax);
totalsalary=bs+((bs*(da+hra-tax))/100);
printf("totalsalary=%2.f",totalsalary);




return 0;

}