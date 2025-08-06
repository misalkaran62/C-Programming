
// find the prime number in new

#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, falt;
    printf("Enter the no:");
    scanf("%d", &n);

    falt = 1;
    if (n % 2 == 0 || n % 3 == 0)
        falt = 0;
    else
    {
        for (i = 5; i <= sqrt(n); i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                falt = 0;
                break;
            }
        }
    }
    if (falt == 1)
    {
        printf("prime");
    }
    else
        printf("not prime");
    return 0;
}