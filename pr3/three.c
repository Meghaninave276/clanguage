#include<stdio.h>
int main()
{
	int n,f,l;
	printf("enter n:");
	scanf("%d",&n);
	l=n%10;
	while(n>10)
	{
		n=n/10;
	}
	f=n;
	printf("sum of first and last digit is %d",f+l);
}
