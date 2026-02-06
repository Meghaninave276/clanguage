#include<stdio.h>
#include<string.h>
int strreverse(char str[20])
{
	int i,len,temp;
	
	int rev[20];
	len=strlen(str);
	
	for(i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
		
		
	}
}
int main()
{
	char str[20];
	printf("enter a string:-");
	scanf("%s",str);
	strreverse(str);
	printf("%s",str);
	
}
