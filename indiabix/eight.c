//3,4,7,8,11,12
#include<stdio.h>
int main()
{
	int i,a=3;
	for(i=1; i<=8; i++)
	{
		printf("%d ",a);
		if(i%2!=0)
		
		{
			a++;
		}
		else
		{
			a+=3;
		}
	}
}


