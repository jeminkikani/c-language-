// no arg no return
#include<stdio.h>

int mul()
{
    int a,b;
    printf("enter a :- ");
    scanf("%d",&a);
    printf("enter b :- ");
    scanf("%d",&b);
    return a*b;
}
    void main()
    {
        int x = mul();
        printf("multipal both of a and b :- %d",x);
    }