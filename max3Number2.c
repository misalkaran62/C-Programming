#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
printf("enetr 3 number");
scanf("%d%d%d",&a,&b,&c);
printf("Max is %.2f",fmax(a,fmax(b,c)));
printf("max is %d",b);
return 0;


}