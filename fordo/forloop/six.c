#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=n; i>=1; i--)
	{
		
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}

