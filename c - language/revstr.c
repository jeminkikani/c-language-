#include <stdio.h>
void main()
{
   char str[50],rev[50];
   int i,j,k;
   printf("Enter a string :-");
   scanf("%[^\n]s",str);

   printf("your string is : %s",str);

   for(i=0; str[i] != '\0'; i++);

	printf("\n your string length :- %d",i);

  	k=i;
	for(j=0; j<=i; j++)
	{
		rev[j] = str[--k];
	}
	rev[i]='\0';
		printf("\n revers string is :- %s ",rev);
}



