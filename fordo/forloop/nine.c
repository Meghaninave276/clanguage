#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,fact=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		
		fact=fact*i;
		
	}
	printf("fact is %d",fact);
}

