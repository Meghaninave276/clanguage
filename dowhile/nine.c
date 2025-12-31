#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,fact=1;
 	printf("enter n:");
 	scanf("%d",&n);
	do
	{
			fact=fact*i;
			
		
			i++;
			
		
	}while(i<=n);
	printf("factorial is %d ",fact);
}

