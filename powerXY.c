#include <stdio.h>
int main()
{
    int x, y, result=1, i;
    printf("Enter the Number :");
    scanf("%d", &x);
    printf("Enter the Power :");
    scanf("%d", &y);
    i = 1;
    while (i <= y)
    {
        result =result* x;
        i++;
    }
    printf("Result %d ^ %d = %d", x, y, result);
    return 0;
}