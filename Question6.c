/*Write a function to sort employees according to their names [refer structure from
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
        printf("Enter id , name and salary if %d Employee ",i+1);
        scanf("%d",&e1[i].id);
        fflush(stdin);
        fgets(e1[i].name,20,stdin);
        L=strlen(e1[i].name);
        e1[i].name[L-1]=0;
        scanf("%f",&e1[i].salary);
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
void sort_name(struct Employee e1[],int n)
{
    int i,j,L,k;
    for(i=1;i<n;i++)
    {
        for(k=0;k<n-i;k++)
        {
           if(strcmp(e1[k].name,e1[k+1].name)>0)
          {
            struct Employee e2;
            e2=e1[k];
            e1[k]=e1[k+1];
            e1[k+1]=e2;
          }
        }

    }
}
int main()
{
    struct Employee e[5];
    input(e,5);
    sort_name(e,5);
    display(e,5);
}
