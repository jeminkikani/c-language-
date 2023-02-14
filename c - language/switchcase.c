#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("enter a :- ");
    scanf("%d",&a);
    printf("enter b :- ");
    scanf("%d",&b);

    printf("\n1.addition");
    printf("\n2.multiplication");
    printf("\n3.substraction");
    printf("\n4.division");

do
{
    printf("\nenter choice :- ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1: 
            printf("\n addition of a and b :- %d",a+b);
            break;
        case 2: 
            printf("\n multiplication of a and b :- %d",a*b);
            break;
        case 3: 
            printf("\n substraction of a and b :- %d",a-b);
            break;
        case 4: 
            printf("\n division of a and b :- %d",a+b);
            break;
            
            default:
                printf("\nwrong choice....");
                break;
    }
}
while(ch != 0);  
}