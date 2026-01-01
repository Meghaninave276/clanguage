//31,29,24,22,17

#include<stdio.h>
int main()
{
	int a=31, i;
	for(i=1; i<=8; i++)
	{
		printf("%d ",a);
		if(i%2!=0)
		{
			a-=2;
			
		}
		else
		{
			a-=5;
		}
		
	}

}
