//Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};
void input(struct Employee e1)
{
    printf("enter employee id , name and salary resp.");
    scanf("%d",&e1.id);
    fflush(stdin);
    fgets(e1.name,20,stdin);
    scanf("%f",&e1.salary);
    display(e1);
}
void display(struct Employee e2)
{
    printf("%d\n",e2.id);
    printf("%s",e2.name);
    printf("%.02f\n",e2.salary);
}
int  main()
{
    struct Employee e;
    input(e);
}
