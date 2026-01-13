#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter a row:");
	scanf("%d",&r);
	printf("enter a col:");
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
	printf("\n");
	int max=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				
			}
			
		}
	}
	printf("max is %d",max);
	
}
