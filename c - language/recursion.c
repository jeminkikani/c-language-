#include<stdio.h>

int fun(int n)
{
    printf("\ninside function :- %d",n);
    if(n<5)
    {
        fun(++n);
    }
    else
    {
        return 0;
    }
     printf("\nOutside function :- %d",n);   
}

int main()
{
    fun(1);
}