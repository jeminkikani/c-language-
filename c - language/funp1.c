#include <stdio.h>
int rev(int n) 
{
  int b = 0, remain;
  
  while (n != 0) 
  {
    remain = n % 10;
    b = b * 10 + remain;
    n = n/10;
  }
  return b;
}

int main()
{
    int n,a;
    printf("Enetr Number :");
    scanf("%d",&n);
    a = rev(n);
    printf("reverse number is %d",a);
}









