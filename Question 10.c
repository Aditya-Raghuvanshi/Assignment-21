/*Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/
#include<stdio.h>
#include<string.h>

struct Marks
{
    int rollno;
    char name[20];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};
void input(struct Marks s1[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter marks of %d student ",i+1);
        scanf("%f",&s1[i].chem_marks);
        scanf("%f",&s1[i].maths_marks);
        scanf("%f",&s1[i].phy_marks);
    }
}
void display(struct Marks s1[],int n)
{
    int i;
    float per;
    for(i=0;i<n;i++)
    {
        per=(s1[i].chem_marks+s1[i].maths_marks+s1[i].phy_marks)*100/300;
        printf("percentage of %d student is %.02f \n",i+1,per);
    }
}
int main()
{
    struct Marks s[5];
    input(s,5);
    display(s,5);
    return 0;
}
