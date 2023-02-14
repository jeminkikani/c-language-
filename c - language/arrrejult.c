#include<stdio.h>
void main()
{
	int maths[5],english[5],scince[5];
	int i,sum;
	float per;
	for(i=0;i<5;i++)
	{
		printf("MATHS[%d]=",i);-
		scanf("%d",&maths[i]);
	}printf("\n");
	for(i=0;i<5;i++)
	{             
		printf("ENGLISH[%d]=",i);
		scanf("%d",&english[i]);
	}printf("\n");
	for(i=0;i<5;i++)
	{
		printf("SCINCE[%d]=",i);
		scanf("%d",&scince[i]);
	}

	printf("MATHS \tENGLISH SCINCE \tTOTAL \tPER \tGRADE");
	
	for(i=0;i<5;i++)
	{
		printf("\n%d",maths[i]);
		printf("\t%d",english[i]);
		printf("\t%d",scince[i]);

		sum=maths[i]+english[i]+scince[i];
		printf("\t%d",sum);

		per=(maths[i]+english[i]+scince[i])/3;
         		printf("\t%0.2f",per);

		if(maths[i]<35||english[i]<35||scince[i]<35||per<35)	
		{
			printf("\t fail");
		}	
		else if(per>80) 
		{
			printf("\t A");
		}
		
		else if(per>60)
		{
			printf("\t B");
		}
		
		else if(per>40)
		{
			printf("\t C");
		}
		else if(per>35)
		{
			printf("\t D");
		}
		
	}
	
}