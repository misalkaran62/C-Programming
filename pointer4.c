// pointer swaping not show out put
// #include<stdio.h>
// void swap(int a, int b)//*a,*b
// {
//     int temp = a;//*a
//     a = b;//*a and *b
//     b = temp;//*b
// }
// int main()
// {
//     int x, y;
//     printf("Enter to number");
//     scanf("%d%d", &x, &y);
//     swap(x, y);
//     printf("After swaping \nX=%d\nY=%d", x, y);
//     return 0;
// }

//this is usg
#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    printf("Enter to number");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
    printf("After swaping \nX=%d\nY=%d", x, y);
    return 0;
}