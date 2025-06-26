
//prime number in count number

#include <stdio.h>
int main()
{
    int i,cnt, n;
    printf("Enter the number:");
    scanf("%d", &n);
    cnt = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 2)
        printf(" Prime nUmber");
    else
        printf(" Not Prime Number");

    return 0;
}