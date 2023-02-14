#include<stdio.h>
void main()
{
	int arr[5][5],i,j;

	for(i=0; i<=4; i++)
    	{
        	for(j=0; j<=4; j++)
        	{
	   	 	printf("\n arr[%d][%d]=",i,j);	
          	 	scanf("%d",&arr[i][j]);
        	}
   	 }
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=4; j++)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
}
