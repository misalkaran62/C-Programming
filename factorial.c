#include<stdio.h>
int main()
{
int n,fact=1,i;

printf("Enter the number :");
scanf("%d",&n);
i=2;
while (i<=n)
{
    fact=fact*n;
    i++;
}


//memory allocation 
// while (n>=2)
// {
//     fact=fact*n;
//     n--;
// }

printf("Factorial is %d",fact);

return 0;
}