//14,28,20,40,32,64
#include<stdio.h>
int main()
{
	int i,a=14;
	for(i=1; i<=8; i++)
	{
		printf("%d ",a);
		if(i%2!=0)
		{
			a*=2;
			
		}
		else
		{
			a-=8;
		}
		
		
		
		
	}
	
}
