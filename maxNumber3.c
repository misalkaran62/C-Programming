#include<stdio.h>
 int main()
{
    int a,b;
    printf("ente 2 number");
    scanf("%d%d",&a,&b);
    //ternary oprater//
    (a>b)? printf("max is %d",a):printf("max is %d",b);
    return 0;
}