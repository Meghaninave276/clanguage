#include<stdio.h>
int main()
{
	int score;
	printf("enter score out of 100:");
	scanf("%d",&score);
	(score>=90 && score<100)?printf("grade A+"):
	(score>=80 && score<90)?printf("grade A"):
	(score>=70 && score<80)?printf("grade B+"):
	(score>=60 && score<70)?printf("grade B"):
	(score>=50 && score<60)?printf("grade C"):
	(score>=40 && score<50)?printf("grade D"):printf("Fail");
}
