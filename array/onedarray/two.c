#include<stdio.h>
int main()
{
	int n,i,sum=0;
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
		for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
			
		}
		
	}
	printf("\n");

	printf("sum is %d",sum);
}
