#include <stdio.h>
struct emp
{
    int id;
    char name[100], dept[100];
    float salary;
};
int main()
{
    struct emp a;
    printf("Enter the Details:");
    printf("\nId :");
    scanf("%d",&a.id);
    printf("Name:");
    scanf("%s",&a.name);
    printf("\nDepartmane:");
    scanf("%s",&a.dept);
    printf("Total Salary:");
    scanf("%f",&a.salary);

    printf("\n Given Data is:\n");
    printf("\nId              :%d",&a.id);
    printf("\nName            :%s",&a.name);
    printf("\nDeparment       : %s",&a.dept);
    printf("\nsalary          :%.2f",&a.salary);

    return 0;
}