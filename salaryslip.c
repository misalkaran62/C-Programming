#include<stdio.h>
int main()
{
float bs,da,hra,tax,totalsalary;

int eid;
char ename[100];
FILE *fp;
fp =fopen("salaryslip.txt","w");

printf(" enter the basic details");
printf("\nID : ");
scanf("%f",&eid);
printf("Name : ");
scanf("%s",&ename);
printf("basic salary : ");
scanf("%f",&bs);
printf("DA (%%) : ");
scanf("%f",&da);
printf("HRA (%%) : ");
scanf("%f",&hra);
printf("TAX (%%) : ");
scanf("%f",&tax);
totalsalary=bs+((bs*(da+hra-tax))/100);
fprintf(fp,"\n-----------------Employee salary---------------");
fprintf(fp,"\n\t\t  : %d",eid);
fprintf(fp,"\n\t\t  : %d",ename);
fprintf(fp,"\n\t\t  : %d",bs);
fprintf(fp,"\n\t\t  : %d",da);
fprintf(fp,"\n\t\t  : %d",hra);
fprintf(fp,"\n\t\t  : %d",tax);
fprintf(fp,"\n\t\ttotalsalary : %.2f",totalsalary);
return 0;
}