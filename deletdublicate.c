#include <stdio.h>
int main()
{
    int i, n, a[100];
    printf("How many element you want's to enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("you enter the data is  data is\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}