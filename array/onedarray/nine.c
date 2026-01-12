#include<stdio.h>
int main()
{
	int n,i,sum=0,avg;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0; i<n;i++)
	{
		printf("%d ",a[i]);
		
		
	}
	
	for(i=0; i<n;i++)
	{
		sum=sum+a[i];
		
		
		
	}
	printf("avg is %d",sum/n);
	
	printf("\n");
}
