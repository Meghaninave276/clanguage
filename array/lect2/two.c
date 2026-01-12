#include<stdio.h>
int main()
{
	int f,s,i,j=0;
	printf("enter a f:");
	scanf("%d",&f);
	printf("enter a s:");
	scanf("%d",&s);
	  int leap[s - f + 1];
	for(i=f; i<s;i++)
	{
		if((i%4==0)||(i%400==0&& i%100!=0))
		{
			leap[j++]=i;
		}
	}
	printf("\n");
	for(i=0; i<j;i++)
	{
		printf("%d ",leap[i]);
		
	}
	
	
}
