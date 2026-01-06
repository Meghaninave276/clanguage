#include<stdio.h>
int main()
{
	int i,j,k;
	char l;
	for(i=1; i<=5; i++)
	{
		for(k=i; k<=4; k++)
		{
			printf("  ");
			
		}
		l='A' + i - 1;
		for(j=i; j>=1; j--)
		{
			printf("%c ",l);
			l--;
			
		}
		printf("\n");
	}
}
