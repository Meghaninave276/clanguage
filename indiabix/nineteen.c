//8,6,9,23,87

#include<stdio.h>
int main()
{
	int i,a=8,b=2;
	for(i=1; i<=8; i++)
	{
		printf("%d ",a);
		a=a*b-i;
		b+=1;
		
		
	}
}
