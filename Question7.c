//Write a program to calculate the difference between two time periods.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Time
{
    int hour;
    int min;
    int sec;
};
void input(struct Time* t3,int n)
{
    printf("Enter %d time period ",n);
    scanf("%d",&t3->hour);
    scanf("%d",&t3->min);
    scanf("%d",&t3->sec);
}
struct Time diffrence(struct Time t3,struct Time t4)
{
        struct Time t;
        if(t4.sec<t3.sec)
        {
            t.sec=(t4.sec+60)-t3.sec;
            t4.min=t4.min-1;
        }
        else
        {
            t.sec=t4.sec-t3.sec;
        }
        if(t4.min<t3.min)
        {
            t.min=(t4.min+60)-t3.min;
            t4.hour=t4.hour-1;
        }
        else
        {
            t.min=t4.min-t3.min;
        }
        t.hour=t4.hour-t3.hour;
        return t;
}
void display(struct Time t5)
{
    printf("Diffrence in the time is %d : %d : %d ",t5.hour,t5.min,t5.sec);
}
int main()
{
    struct Time t1,t2,t3;
    input(&t1,1);
    input(&t2,2);
    t3=diffrence(t1,t2);
    display(t3);
}
