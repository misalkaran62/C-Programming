//student marks progarme to using stureture

#include<stdio.h>
struct student
{
    int roll;
    char name[100];//[any array need must be usg] this a stirng
    float marks;

};

int main()
{
struct student s;//variable you can choose any varibale

    printf("Enetr Student Detials:");
    printf("\n Roll Number:");
    scanf("%d",&s.roll);
    printf("Name:");
    scanf("%s",&s.name);
    printf("Marks:");
    scanf("%f",&s.marks);

    printf("\n Given data is:\n");
    printf("\n Roll Number  :%d",s.roll);
    printf("\n Name         :%s",s.name);
    printf("\n Marsks       :%.2f",s.marks);

return 0;
}