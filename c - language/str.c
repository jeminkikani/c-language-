#include<stdio.h>
void main()
{
	char str[50];
	int i;
	printf("enter string :- ");
	scanf("%[^\n]s",str);

	printf("your string :- %s",str);
	
	for(i=0; str[i] != '\0'; i++);

	printf("\n your string length :- %d",i);
}