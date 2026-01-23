#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
	return a/b;
}
int module(int a, int b)
{
	return a%b;
}
int main()
{
	int a,b,choice;

	
	do
	{
		printf("1. add\n");
		printf("2. sub\n");
		printf("3. mul\n");
		printf("4. div\n");
		printf("5. module\n");
			printf("6. exit\n");
		printf("enter choice");
	scanf("%d",&choice);
	if(choice>=1 && choice<=5)
	{
			printf("enter a\n");
			scanf("%d",&a);
			printf("enter b\n");
			scanf("%d",&b);
	
	}
	switch(choice)
	{
		case 1:printf("add is %d\n",add(a,b));
		break;
		case 2:printf("sub is %d\n",sub(a,b));
		break;
		case 3:printf("mul is %d\n",mul(a,b));
		break;
		case 4:printf("div is %d\n",div(a,b));
		break;
		case 5:printf("mod is %d\n",module(a,b));
		break;
		
	}
	}while(choice!=6);
	return 0;
	
	
}
