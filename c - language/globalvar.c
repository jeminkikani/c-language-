#include<stdio.h>

int m,s,e,total;
float per;

void dis()
{
    printf("maths\tscience\tenglish\ttotal\tper");
    printf("\n%d\t%d\t%d\t%d\t%.2f",m,s,e,total,per);
}
void calculation()
{
    total = m + s + e;
    per= total / 3;
}
void setdata()
{
    printf("enter maths marks :-");
    scanf("%d",&m);
    printf("enter science marks :-");
    scanf("%d",&s);
    printf("enter english marks :-");
    scanf("%d",&e);
}
int main()
{
    setdata();
    calculation();
    dis();
}