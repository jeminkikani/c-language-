#include<stdio.h>
int count (int n)
{
    int rupees[]={200,100,50,20,10,5,2,1};
    int a,b=0;
    for(int i=0; i<8; i++)
    {
        if(n>=rupees[i]);
        {
            a=n/rupees[i];
            b=b+a;
            printf("\n %d:%d",rup[i],b);
            n=n%rupees[i];
            b=b-a;
        }
    }
}
int main()
{
    int n;
    printf("Enter amount :");
    scanf("%d",&n);
    count(n);
}