#include<stdio.h>
int square(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",(*ptr)*(*ptr));
		ptr++;
		
	}
	printf("\n");
	
}
int main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	square(&a,n);
		
}
