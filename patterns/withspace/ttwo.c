#include<stdio.h>
int main()
{
	int i,j,l;
	char k;
	for(i=1; i<=5; i++)
	{
		for(l=i; l<=4; l++)
		{
			printf("  ");
		}
		 k = 'A'; 
		
		for(j=1; j<=i; j++)
		{
			printf("%c ",k);
			k++;
		
		}
		printf("\n");
	}

}
