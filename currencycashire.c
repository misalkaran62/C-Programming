#include <stdio.h>
int main()
{
    int amount;
    int ten, five, one;
    printf("Enter the withdraw amount");
    scanf("%d", &amount);

    ten = amount / 10;
    amount = amount % 10;

    five = amount / 5;
    amount = amount % 5;

    one = amount / 1;
    amount = amount % 1;

    printf("\nTotal number Of currancy :");
    printf("\nten rupes Notes : %d ", ten);
    printf("\n five rupes Notes : %d ", five);
    printf("\n one rupes Notes : %d ", one);

    return 0;
}