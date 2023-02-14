#include<stdio.h>

int main()
{
    int a = 20,*p,**x;
    p = &a;
    x = &p;
    printf("value of a :- %d",a);
    printf("\naddres of a :- %u",&a);
    printf("\naddress of a using p :- %d",p);
    printf("\naddress of p is :- %u",&p);
    printf("\nvalue of a using p is :- %d",*p);
    printf("\nvalue of a using x is :- %d",**x);
}