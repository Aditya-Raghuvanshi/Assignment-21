//Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<string.h>


struct Student
{
    char name[20];
    int rollno;
};
void input(struct Student s1[],int n)
{
    int i,L;
    for(i=0;i<n;i++)
    {
        printf("Enter name and roll no. of %d student ",i+1);
        fgets(s1[i].name,20,stdin);
        L=strlen(s1[i].name);
        s1[i].name[L-1]=0;
        scanf("%d",&s1[i].rollno);
        fflush(stdin);
    }
}
void display(struct Student s1[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s ",s1[i].name);
        printf("%d\n",s1[i].rollno);
    }
}
int main()
{
    struct Student s[10];
    input(s,10);
    display(s,10);
    return 0;
}
