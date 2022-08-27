/*Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/
#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};
void input(struct Employee e1[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       printf("enter employee id , name and salary resp. of %d employee",i+1);
       scanf("%d",&e1[i].id);
       fflush(stdin);
       fgets(e1[i].name,20,stdin);
       scanf("%f",&e1[i].salary);
    }

}
void highest_salary(struct Employee a[])
{
    int i,high,x=0;
    high=a[0].salary;
    for(i=1;i<10;i++)
    {
        if(high<a[i].salary)
        {
            high=a[i].salary;
            x=i;
        }
    }
    printf("Highest salary Employee is of index no. %d and has salary %d ",x,high);
}
int  main()
{
    struct Employee e[10];
    input(e,10);
    highest_salary(e);
    return 0;
}
