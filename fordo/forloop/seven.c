#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for(i=2000; i<=3000; i++)
	{
		
		if((i%4==0)||(i%4==0 && i%100!=0))
		{
			printf("%d ",i);
		}
	}
}

