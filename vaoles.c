#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the alphabet");
    scanf("%c", &ch);

    ch=tolower(ch);
    switch (ch)
    {
    case 'a':
    case 'o':
    case 'e':
    case 'i':
    case 'u':
        printf("Vowle");

        break;

    default:
        printf("Not Vowel !!");
    }
    return 0;
}