#include <stdio.h>
int main()
{
    float u, a, t;
    float v,s;
    printf(" Enter the Initial velocity");
    scanf("%f",&u);

    printf("Enter the acceleration");
    scanf("%f",&a);

    printf("Enter the time");
    scanf("%f",&t);


    v=u+a*t;
    s=u+a*t*t;

    printf("show the final velocity %.2f",v);
    printf("\nshow the final distance travelled %.2f",s);

    return 0;


}