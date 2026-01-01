//80,10,70,15,60
#include<stdio.h>
int main()
{
	int i,a=80,b=10;
	for(i=1; i<=8; i++)
	{
		printf("%d %d ",a,b);
		a-=10;
		b+=5;
		
	}
}
