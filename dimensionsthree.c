#include <stdio.h>
int main()
{
    float l, b, h;
    float surfacearea, volume;

    printf("Enter the length");
    scanf("%f", &l);

    printf("Enter the breadth");
    scanf("%f", &b);

    printf("Enter the hight");
    scanf("%f", &h);

    surfacearea = 2 * (l * b + l * h + b * h);
    volume = l * b * h;

    printf("Show the surfacearea %.2f", surfacearea);
    printf("\nShow the volume %.2f", volume);

    return 0;
}
