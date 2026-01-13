#include<stdio.h>
int main()
{
	int score;
	printf("enter score out of 100:");
	scanf("%d",&score);
	switch(score/10)
	{
		case 10:
		case 9:printf("your grade is A excellent work");
		break;
		case 8:printf("your grade is B well done");
		break;
		case 7:printf("your grade is D you passed but you could do better");
		break;
			case 6:printf("your grade is F sorry you failed");
		break;
		default:printf("enter valid input");
		
	}
}
