#include<stdio.h>
void main()
{
	char str[50],s[50];
	int i,j;
	printf("enter string :- ");
	gets(str);

	printf("enter string :- ");
	gets(s);
					
	printf("\n your string :- %s",str);
	
	printf("\n your string :- %s",s);
	
	for(i=0; str[i] != '\0'; i++);
	
	for(j=0; str[j] != '\0'; j++)
	{
		str[i]=s[j];
		i++;
	}
	str[i]='\0';
	printf("\n your string final string:- %s",str); 
}

