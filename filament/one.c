#include<stdio.h>
#include <string.h>

int main()
{
	char str[20]="megha";
	char rev[20];
	int i;
	printf("enter a string:-");
	scanf("%s",str);
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		rev[i]=str[len-i-1];
		
	}
	rev[len] = '\0';
	if(strcmp(str,rev)==0)
	{
		printf("string is palidrom");
	}
	else
	{
		printf("string is not palidrom");
	}
	
}
