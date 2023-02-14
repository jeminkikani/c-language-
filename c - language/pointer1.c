#include<stdio.h>

int main()
{
    int a,b,c,*p,*q;

    printf("entere a :- ");
    scanf("%d",&a);
    printf("\nentere b :- ");
    scanf("%d",&b);

    printf("\nvalue of a :- %d",a);   
    printf("\nvalue of b :- %d",b);  


    p=&a;
    q=&b;

     c = *p;
    *p = *q;
    *q = c;

    printf("\nswaping value of a :- %d",a);   
    printf("\nswaping value of b :- %d",b);   
}