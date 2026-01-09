#include<stdio.h>
int main()
{
	int i,j;
	int k=11;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
