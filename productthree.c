#include <stdio.h>
int main()
{
    int id = 1, pid1, pid2, pid3;
    char pname1[100], pname2[100], pname3[100], cname[100], cmob[100];
    float pprice1, pprice2, pprice3, discount, discountamt, discountpay, total;
    int pqty1, pqty2, pqty3;
    printf("\n enter Coustomer Name : ");
    scanf("%s",&cname);
    printf("\n enter Mobile NO :");
    scanf("%s",&cmob);

    printf("\nEnter the Product Details :");
    pid1 = id++;
    printf("\n Name :");
    scanf("%s", &pname1);
    printf("\n Price :");
    scanf("%f", &pprice1);
    printf("\n Qty :");
    scanf("%d", &pqty1);

    printf("\nEnter the Product Details :");
    pid2 = id++;
    printf("\n Name :");
    scanf("%s", &pname2);
    printf("\n Price :");
    scanf("%f", &pprice2);
    printf("\n Qty :");
    scanf("%d", &pqty2);

    printf("\nEnter the Product Details :");
    pid3 = id++;
    printf("\n Name :");
    scanf("%s", &pname3);
    printf("\n Price :");
    scanf("%f", &pprice3);
    printf("\n Qty :");
    scanf("%d", &pqty3);

    total = (pprice1 * pqty1) + (pprice2 * pqty2) + (pprice3 * pqty3);

    if (total > 10000)
        discount = 10;
    else if (total > 8000)
        discount = 7;
    else if (total > 5000)
        discount = 3;
    else
        discount = 0;

    discountamt = (total * discount) / 100;
    discountpay = total - discountamt;
    printf("\ncustomer Nanme:%s", cname);
    printf("\nMobile NO  : %s", cmob);

    printf("\n-------------------------------------------------------------");
    printf("\n|  ID   |      NAME     |  PRICE    |    QTY     |  TOTAL    |");
    printf("\n-------------------------------------------------------------");
    printf("\n|%7d|%15s|%11f|%12d|%11f", pid1, pname1, pprice1, pqty1, (pprice1 * pqty1));
    printf("\n-------------------------------------------------------------");
    printf("\n|%7d|%15s|%11f|%12d|%11f", pid2, pname2, pprice2, pqty2, (pprice2 * pqty2));
    printf("\n-------------------------------------------------------------");
    printf("\n|%7d|%15s|%11f|%12d|%11f", pid3, pname3, pprice3, pqty3, (pprice3 * pqty3));
    printf("\n-------------------------------------------------------------");

    printf("\n\t\t\t\t\ttotal   : %2.f", total);
    printf("\n\t\t\t\t\tdiscount (%%)   : %2.f", discount);
    printf("\n\t\t\t\t\tdiscountamt   : %2.f", discountamt);
    printf("\n\t\t\t\t\tdiscountpay   : %2.f", discountpay);
    return 0;
}