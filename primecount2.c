//time complycity in 50% reduce time 
#include<stdio.h>
int main()
{
    int i,n,cnt;
    printf("Entert the number :");
    scanf("%d",&n);

    cnt=0;
    for ( i = 2; i <= n/2; i++)
    {
        if(n%i==0)
        cnt++;

    }
    if(cnt==0)
    printf("prime number");
    else
    printf("not prime noumber");
    return 0;
}