#include<stdio.h>
#include<conio.h>
int main()
{
	int n,fact=1,i=1;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		
		i++;
	}
	printf("fact is %d",fact);
	return 0;
}
