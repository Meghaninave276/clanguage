#include<stdio.h>
#include<conio.h>

int main()
{
	float h,b;
	
	printf("enter b:");
	scanf("%f",&b);
	printf("enter h:");
	scanf("%f",&h);
	float tri = 0.5*(b*h);
	printf("area of tri is %f",tri);
	return 0;
}

