#include<stdio.h>
#include<conio.h>
int main()
{
	int i=2000;
	while(i<=3000)
	{
		if((i%400==0)||(i%4==0 && i%100!=0))
		{
			printf("%d ",i);
			
		}
	
		i++;
	}
	return 0;
}
