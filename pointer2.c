// Addition 2 number using pointer
#include <stdio.h>
int main()
{
    int a, b, *p, *q;
    p = &a;
    q = &b;
    printf("Enter 2 number:");
    scanf("%d%d", &a, &b);//("%d%d", p,q); optionl
    printf("addition is %d", *p + *q);
    return 0;
    
}