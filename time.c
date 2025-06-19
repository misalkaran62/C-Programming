#include <stdio.h>
int main()
{
    int h, m, s;

    printf("Enter Hourse");
    scanf("%d", &h);
    printf("Enter minuit");
    scanf("%d", &m);
    printf("Enter Secound");
    scanf("%d", &s);
    if (h >= 0 && h < 24)
    {
        if (m >= 0 && m < 60)
        {
            if (s >= 0 && s < 60)
                printf("Time id Valid");
            else
                printf("Secound is Invalid");
        }
        else
            printf("Minuit id InValid");
    }
    else
        printf("hourse is Invalid");
    return 0;
}
