#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter r:");
	scanf("%d",&r);
		printf("enter c:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
				printf("enter a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
			
		}
		
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		
		
	}
	for(i=0;i<r;i++)
	{
		
		int sum=0;
			for(j=0;j<c;j++)
			{
				sum=sum+a[i][j];
			}
				printf("sum of row %d=%d\n",i,sum);

			
		
	}
	
}
