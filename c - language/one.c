#include<stdio.h>
void main()
{
	int i,j,a[5][5];
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
				printf("a[%d][%d] :- ",i,j);
				scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
}