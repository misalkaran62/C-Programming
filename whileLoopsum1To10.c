#include <stdio.h>
int main()
{

    int n, i, sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);

    i = 0;
    while (i <= n)
    {
        sum = sum + i;
       i++;
        
    }
    printf("%d Total \n", sum);
    return 0;
}