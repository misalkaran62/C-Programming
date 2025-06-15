#include<stdio.h>
int main()
{
    float fahrenheit,Celsius,Kelvin;
    printf("Enter the fahrenheit in tempreature : ");
    scanf("%f",&fahrenheit);

    Celsius = (fahrenheit -32)*5/9;
    Kelvin = Celsius+273.15;

    printf("Show the celsius %.2f",Celsius);
    printf("\nshow the kelvin %.2f",Kelvin);
    return 0;

}

