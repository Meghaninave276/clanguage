#include<stdio.h>
int main()
{
	int n,i;
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
	printf("length is %d",n);
	printf("\n");
}
