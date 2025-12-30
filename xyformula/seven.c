#include<stdio.h>
#include<conio.h>

int main()
{
	float x,y,z;
	
	printf("enter x:");
	scanf("%f",&x);
		printf("enter y:");
	scanf("%f",&y);
	 z = (x*x)+(2*x*y)+(y*y);
	printf("z is %f",z);
	return 0;
}

