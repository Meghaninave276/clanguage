#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are elgible to vote");
	}
	else
	{
		printf("you are not elgible to vote");
	}
}
