// Array
#include <stdio.h>
struct student
{
    int id;
    char name[100], dept[100];
    float salary;
};
int main()
{
    struct student s[100];
    int n, i;
    printf("Enetr the How many Details to yu want to Display");
    scanf("%d", &n);
    printf("Enter the student details:");
    for (i = 0; i < n; i++)
    {
        printf("\n ID :");
        scanf("%d", &s[i].id);
        printf("\nName:");
        scanf("%s", &s[i].name);
        printf("\nMarks:");
        scanf("%f", &s[i].salary);
        printf("\nDept :");
        scanf("%s", &s[i].dept);
    }
    printf("\n Given data is :\n");
    for ( i = 0; i <n; i++)
    {
        printf("\n\nID       : %d",s[i].id);
        printf("\nname     : %s",s[i].name);
        printf("\nsalary   : %f",s[i].salary);
        printf("\nDept     : %s",s[i].dept);
    }
    return 0;
}
