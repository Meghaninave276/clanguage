#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("no is neutral");
		
	}
	else if(n>0)
	{
		printf("no is positive");
		
	}
	else
	{
		printf("no is negative");
	}
	
	
	return 0;
	
	
	
}
