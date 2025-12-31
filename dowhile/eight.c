#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,sum=0;
 	printf("enter n:");
 	scanf("%d",&n);
	do
	{
			sum=sum+i;
			
		
			i++;
			
		
	}while(i<=n);
	printf("sum is %d ",sum);
}

