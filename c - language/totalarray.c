#include<stdio.h>
void main()
{
	int n,sum,sum1,sum2,i;

	printf("Enter a number: ");
	scanf("%d",&n);

	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("[%d]",i);
		scanf("%d",&arr[i]);
	}

	int odd =0,even = 0;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		odd++;
		else
		even++;
	}
		printf("\n\todd: %d",odd);
		printf("\n\teven: %d",even);
		sum=odd+even;
		printf("\n\tsum: %d",sum); 
		sum1=odd+even;
		printf("\nodd number total sum :- %d",sum1);
		sum2=even+odd;
		printf("\neven number total sum :- %d",sum2);

}
