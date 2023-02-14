#include<stdio.h>
void main()
{
	int n,sum;

	printf("Enter a number: ");
	scanf("%d",&n);

	int arr[5];
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
		
}