#include<stdio.h>
int main()
{
	int n,m,l,i;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter m:");
	scanf("%d",&m);
	int a[n],b[m],c[n+m];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		printf("enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		c[n+i]=b[i];
	}
	printf("\n");
	for(i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
}

