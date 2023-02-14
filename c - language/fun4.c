// with arg with return
#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("enter x :- ");
    scanf("%d",&x);
    printf("enter y :- ");
    scanf("%d",&y);
    int total = add(x,y);
    printf("addition of a and b :- %d",total);
}
