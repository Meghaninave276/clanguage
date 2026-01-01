#include<stdio.h>
int main()
{
	int i,a=22;
	for(i=1; i<=7;i++)
	{
		printf("%d ",a);
		if(i%2!=0)
		{
			a--;
			
		}
		else
		{
			a+=2;
		}
	}
	
}
//22,21,23,22,24,23
