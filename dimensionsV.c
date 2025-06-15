#include<stdio.h>
int main()
{
    float r,height,PI=3.14;
    float surfaceArea,valume;

    printf(" Enter the radius ");
    scanf("%f",&r);

    printf("Enter the height ");
    scanf("%f",&height);

    surfaceArea = 2*PI*r*(r=height);
    valume= PI * r*r*height;

    printf("surface area of the =%.2f",surfaceArea);
    printf("\nvalume of the cylinder = %.2f",valume);

    return 0;
}
