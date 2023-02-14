#include<stdio.h>

struct jk
{
    int id;
    char product_name[50];
    int rate,qty,amt,billamt,netbill;
    float dis,gst;
};
int main()
{
    struct jk a[5],b;
    int i;
    for(i=0; i<=2; i++)
    {
        printf("enter id :-");
        scanf("%d",&a[i].id);
        printf("enter product_name :-");
        scanf("%s",&a[i].product_name);
        printf("enter rate :-");
        scanf("%d",&a[i].rate);
        printf("enter qty:-");
        scanf("%d",&a[i].qty);
    }

    printf("id\tname\trate\tqty\tamt\tdis\tbillamt\tgst\tnetbill");

    for(i=0;i<=2;i++)
    {
        a[i].amt = a[i].rate * a[i].qty;
        a[i].dis   = a[i].amt * 0.05;
        a[i].billamt = a[i].amt - a[i].dis;
        a[i].gst = a[i].billamt * 0.18;
        a[i].netbill = a[i].billamt + a[i].gst;
        printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\t%d\t%.2f\t%d",a[i].id,a[i].product_name,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billamt,a[i].gst,a[i].netbill);
    }
    
}



