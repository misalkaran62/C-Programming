#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the First number");
    scanf("%d", &a);

    printf("Enter the secound number");
    scanf("%d", &b);

    printf("Show the Befor swapping :\n");
    printf("a=%d \n", a);
    printf("b=%d \n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Show the after swapping :\n");
    printf("a=%d \n", a);
    printf("b=%d \n", b);
    return 0;
}