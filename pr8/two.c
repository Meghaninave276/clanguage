#include<stdio.h>
int cube(int r,int c)
{
	int i,j,t=1;
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			
		}
			printf("\n");
	}
	

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			 printf("%d ", a[i][j] * a[i][j] * a[i][j]);
		
			
			
		}
		printf("\n");
	}

	
	
}
int main()
{
	cube(3,3);
	
	
}
