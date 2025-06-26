//SQRT time reduce to prime number in fast output
#include<stdio.h>
#include<math.h>
int main()
{
int i,n,falg;
printf("Entert the nuber");
scanf("%d",&n);

falg=1;
for (i = 2;i<=sqrt(n);i++)
{
    if(n%i==0)
    {
    falg=0;
    break;
    }
}
if(falg==1)
printf("prime");
else
printf("not prime");
return 0;

}