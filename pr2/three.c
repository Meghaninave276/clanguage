#include<stdio.h>
int main()
{
	int score;
	printf("enter score out of 100:");
	scanf("%d",&score);
	if(score>=90 && score<100||score>=80 && score<90||score>=70 && score<80
	||score>=60 && score<70||score>=50 && score<60||score>=40 && score<50)
	{
		printf("congratulations you are eligible for next level");
		
		
	}
	else
	{
		printf("please try again next time");
	}
}
