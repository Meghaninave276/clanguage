#include<stdio.h>
int main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0; i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0; i<n;i++)
	{
		printf("%d ",a[i]);
		
		
	}
	printf("\n");
	for(i=0; i<n;i++)
	{
		printf("enter b[%d]",i);
		scanf("%d",&b[i]);
		
	}
	for(i=0; i<n;i++)
	{
		printf("%d ",b[i]);
		
		
	}
	printf("\n");
	for(i=0; i<n;i++)
	{
		c[i]=a[i]+b[i];
		
		
	}
	printf("sum of array is\n");
	for(i=0; i<n;i++)
	{
		printf("%d ",c[i]);
		
	}
	
}

