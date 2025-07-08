//using store addrees in pointer 
#include <stdio.h>
int main()
{
    //any alhabate you can usg ex:- a,p
    int a;
    int *p;

    printf("enter the number");
    scanf("%d", &a);
    p = &a;
    printf("Number is %d", *p);
    return 0;
}
//demo int,a[10] 
//main 
//call by referance 
// call by value
