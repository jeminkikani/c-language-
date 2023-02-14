#include<stdio.h>
int multiply(int n) 
{
    if (n>=1)
        return n*multiply(n-1);
    else
        return 1;
}

int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, multiply(n));
    return 0;
}

