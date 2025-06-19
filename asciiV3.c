#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf("Enter Enythings :");
scanf("%c",&ch);
if(isalpha(ch))
printf("Alphabet");
else if (isdigit(ch))
printf("Digit");
else
printf("Special Symbol");
return 0;

}