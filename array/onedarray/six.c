#include<stdio.h>
int main()
{
		int n,i,j;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("enter a a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	printf("\n");
		for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	
		
	}
	printf("\n");
	int min=a[0];
	for(i=0; i<n; i++)
	{
		if(min>a[i])
		{
			min=a[i];
			
		}
		
	}
	printf("min is %d",min);
}
