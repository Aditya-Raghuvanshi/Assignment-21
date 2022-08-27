/*Write a function to take input employee data from the user. [ Refer structure from
question 1 ]*/
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
}
int  main()
{
    struct Employee e;
    input(e);
}
