#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Ente the number :");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    //6 and 28 is only perfact number 
    if (sum == n)

        printf("Perfact number ");

    else
        printf("Not perfact number ");
    return 0;
}