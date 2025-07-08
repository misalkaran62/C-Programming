// using array in addition
#include <stdio.h>
int main()
{
    int a[100], i, n, *p;
    p = &a[0]; // base address and satrt  addrss
    printf("Enter th number");
    scanf("%d", &n);
    printf("NEter the number\n");
    for (i = 0; i < n; i++)

        scanf("%d", &p[i]);
    printf("Given data \n");
    for (i = 0; i < n; i++)

        printf("%d\n", p[i]);
    return 0;
}