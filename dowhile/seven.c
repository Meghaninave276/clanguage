#include<stdio.h>
#include<conio.h>
int main()
{
	int i=2000;
	do
	{
		if((i%400==0)||(i%4==0 && i%100!=0))
		{
			printf("%d ",i);
		}
		i++;
		
	}while(i<=3000);
}

