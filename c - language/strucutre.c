#include<stdio.h>

struct stud
{
    int id;
    char name[50];
    int maths,science,english,total;
    float per;
};
int main()
{
    struct stud a[5],b;
    int i;
    for(i=0; i<=2; i++)
    {
        printf("enter id :-");
        scanf("%d",&a[i].id);
        printf("enter name :-");
        scanf("%s",&a[i].name);
        printf("enter maths :-");
        scanf("%d",&a[i].maths);
        printf("enter science :-");
        scanf("%d",&a[i].science);
        printf("enter english :-");
        scanf("%d",&a[i].english);        
    }

    printf("id\tname\tmaths\tscience\tenglish\ttotal\tper");

    for(i=0;i<=2;i++)
    {
        a[i].total = a[i].maths + a[i].science + a[i].english;
        a[i].per   = a[i].total / 3;

        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",a[i].id,a[i].name,a[i].maths,a[i].science,a[i].english,a[i].total,a[i].per);
    }
    
}



