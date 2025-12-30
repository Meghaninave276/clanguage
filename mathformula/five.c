#include<stdio.h>
#include<conio.h>

int main()
{
	float p,r,t;
	
	printf("enter p:");
	scanf("%f",&p);
	printf("enter r:");
	scanf("%f",&r);
	printf("enter t:");
	scanf("%f",&t);
	float interest = (p*r*t)/100;
	printf("area of circle is %f",interest);
	return 0;
}

