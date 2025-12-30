#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
    if(n >= 0)
    {
        if(n == 0)
        {
            printf("num is neutral");
        }
        else
        {
            printf("num is positive");
        }
    }
	else
	{
		printf("num is negative");
	}
	return 0;
	
}
