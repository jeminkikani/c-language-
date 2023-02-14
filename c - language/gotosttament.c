// goto stement 
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n number :- ");
    scanf("%d",&n);
    table:
        if(i<=10)
        {
            printf("\n %d * %d = %d ",n,i,n*i);
            i++;
            goto table;
        }
}