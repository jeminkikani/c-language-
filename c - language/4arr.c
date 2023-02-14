#include<stdio.h>
int main()
{
        int arr[12][12],row,col,sum,i,j;
        printf("your matrix row= ");
        scanf("%d",&row);
        printf("\n your matrix columb= ");
        scanf("%d",&col);

printf("ENTER THE ELEMENT :- ");
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("\n arr[%d][%d]=",i,j);
                        scanf("%d",&arr[i][j]);
                }
        }

        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf(" %d \t",arr[i][j]);
                }printf("\n");
        }

printf("\n");

        for(i=0;i<row;i++)
        {
                        sum=sum+arr[i][i];
        }
        printf("THE SUM OF THE DIAGONAL IS = %d",sum);
       
}