#include <stdio.h>
int main()
{
    int a, b, temp;

    printf("Enter the First Number");
    scanf("%d", &a);

    printf("Enter the second Number");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After interchnage : \n");
    printf("a=%d \n", a);
    printf("b=%d \n", b);
    return 0;
}
