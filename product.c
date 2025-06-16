#include <stdio.h>

int main()
{
    int id;
    char name[100];
    int qty;
    float price, total, discountAmt, discountPercent, finalAmt;
    printf("Enter details for   Product");
    printf("\nID: ");
    scanf("%d", &id);
    printf("\nName: ");
    scanf("%s", name);
    printf("\nQuantity: ");
    scanf("%d", &qty);
    printf("\nPrice (per unit): ");
    scanf("%f", &price);
    printf("\nDiscount (%%): ");
    scanf("%f", &discountPercent);

    total = qty * price;
    discountAmt = (discountPercent / 100) * total;
    finalAmt = total - discountAmt;

    printf("ID\tName\tQty\tPrice\tTotal\tDiscount\tFinal\n");
    printf("%d\t%s\t%d\t %.2f\t%.2f\t%.2f\t\t%.2f\n", id, name, qty, price, total, discountAmt, finalAmt);
    return 0;
}
