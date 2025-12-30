#include<stdio.h>
#include<conio.h>

int main()
{
	float x,y,z;
	
	printf("enter x:");
	scanf("%f",&x);
		printf("enter y:");
	scanf("%f",&y);
	 z = (x*x*x)+(y*y*y)+(z*z*z)+3*(x+y)*(y+z)*(z+x);
	printf("z is %f",z);
	return 0;
}

