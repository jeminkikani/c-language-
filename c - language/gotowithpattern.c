#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n number :- ");
    scanf("%d",&n);
    table:
        if(i<=n)
        {
            printf("\n\t*",i);
            printf("\t*",i-4);
            printf("\t*",i-3);
            printf("\t*",i-2);
            printf("\t*",i-1);
            i++;
            goto table;
        }
}