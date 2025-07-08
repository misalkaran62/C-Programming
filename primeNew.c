
// find the prime number in new

#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, falg;
    printf("Enter the no:");
    scanf("%d", &n);

    falg = 1;
    if (n % 2 == 0 || n % 3 == 0)
    falg = 0;
    else
    {
        for (i = 5; i <= sqrt(n); i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                falg = 0;
                break;
            }
        }
    }
    if (falg == 1)
    {
        printf("prime");
    }
    else
        printf("not prime");
    return 0;
}