#include <stdio.h>
int main()
{
    int mno;
    printf("Enter the Mounth Numer");
    scanf("%d", &mno);

    switch (mno)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");

        break;
    case 2:
        printf("28/29 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");

    default:
        printf("INVAILD CHOICE !! ");
        break;
    }
}