#include<stdio.h>
void main()
{	
	int arr[5][5][5],i,j,k;

	for(i=0; i<=4; i++)
    	{
        	for(j=0; j<=4; j++)
        	{
			for(k=0; k<=4; k++)
        		{
	   	 	printf("\n arr[%d][%d][%d]:-", i,j,k);	
          	 	scanf("%d",&arr[i][j][k]);
			}
        	}
   	 }
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=4; j++)
		{
			for(k=0; k<=4; k++)
        		{
			printf("%d \t",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
