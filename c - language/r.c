#include<stdio.h>
void main()
{
	int maths[5],eng[5],sci[5];
	int i,sum;
	float per;
	for(i=0; i<5; i++)
	{
		printf("MATHS[%d]=",i);
		scanf("%d",&maths[i]);
	}
	
printf("\n");

	for(i=0;i<5;i++)
	{             
		printf("ENGLISH[%d]=",i);
		scanf("%d",&eng[i]);
	}

printf("\n");

	for(i=0;i<5;i++)
	{
		printf("SCINCE[%d]=",i);
		scanf("%d",&sci[i]);
	}

	printf("MATHS \tENGLISH SCINCE \tTOTAL \tPER \tGRADE");
	
	 
for(i=0;i<5;i++)
	{
		printf("\n%d",maths[i]);
		printf("\t%d",eng[i]);
		printf("\t%d",sci[i]);

		sum=maths[i]+eng[i]+sci[i];
			printf("\t%d",sum);

		per=(maths[i]+eng[i]+sci[i])/3;
         		printf("\t%0.2f",per);

		if(maths[i]<35||eng[i]<35||sci[i]<35||per<35)	
		{
			printf("\t fail");
		}	
		else if(per>=90) 
		{
			printf("\t A");
		}
		
		else if(per>=75)
		{
			printf("\t B");
		}
		
		else if(per>=55)
		{
			printf("\t C");
		}
		else if(per>=35)
		{
			printf("\t D");
		}
		
	}
	
}