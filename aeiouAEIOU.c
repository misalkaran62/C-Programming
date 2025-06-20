#include <stdio.h>
int main()
{
    char ch;
    printf("Enetr the charter");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
  
    printf("%c is a vowls",ch);

        break;

    default:
    printf("%c is not vowls",ch);
        break;
    }
}