#include<stdio.h>
int main()
{
    char ch;
    printf("enter Enythings");
    scanf("%c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 112))
        printf("Alphabet");
    else if (ch >= 48 && ch<= 57)
        printf("Digit");
    else
        printf("Special Symbol");
    return 0;
}