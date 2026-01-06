#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=5; i>=1; i--)
	{
		for(k=i; k>1; k--)
		{
			printf("  ");
			
		}
		for(j=5; j>=i; j--)
		{
			if((i+j)%2==0)
			{
				printf("1 ");
				
			}
			else
			{
				printf("0 ");
				
			}
		}
		printf("\n");
	}
}
