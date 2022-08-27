/*Write a function to sort employees according to their salaries [ refer structure from
question 1]*/
#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

void input(struct Employee e1[],int n)
{
    int i,L;
    for(i=0;i<n;i++)
    {
        printf("Enter id , name and salary of %d employee ",i+1);
        scanf("%d",&e1[i].id);
        fflush(stdin);
        fgets(&e1[i].name,20,stdin);
        L=strlen(&e1[i].name);
        e1[i].name[L-1]=0;
        scanf("%f",&e1[i].salary);
    }
}
void sort(struct Employee e1[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(e1[j].salary>e1[j+1].salary)
            {
                struct Employee temp;
                temp=e1[j];
                e1[j]=e1[j+1];
                e1[j+1]=temp;
            }
        }
    }
}
void display(struct Employee e1[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",e1[i].id);
        printf("%s ",e1[i].name);
        printf("%.02f\n",e1[i].salary);
    }
}
int main()
{
    struct Employee e[5];
    input(e,5);
    sort(e,5);
    display(e,5);
    return 0;
}
