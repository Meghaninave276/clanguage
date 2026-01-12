#include<stdio.h>
int main()
{
	int n,i,j;
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
	printf("\n");
	for(i=0; i<n;i++)
	{
		printf("multiplication table is %d\n",a[i]);
		for(j=1; j<=10;j++)
		{
			printf("%d * %d = %d\n",a[i],j,a[i]*j);
			
		}
	}
	
	
}
