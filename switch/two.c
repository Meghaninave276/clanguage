#include<stdio.h>
#include<conio.h>
int main()
{
	int lang,choice;
	printf("welcome to telecome service\n");
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("enter your lang");
	scanf("%d",&lang);
	switch(lang)
	{
		case 1:
			printf("english selected\n");
			printf("press 1 for balance\n");
			printf("press 2 for data plans\n");
			printf("press 3 for customer care\n");
			printf("enter your choice");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:printf("your balance is 42033\n");
				break;
				case 2:printf("Available Data Plan: 1.5GB/day for 28 days\n");
				break;
				case 3:printf("Connecting to Customer Care...\n");
				break;
				default:printf("invalid scenario...\n");
				
			}
			break;
			case 2:
				printf("hindi selected\n");
			printf(" balance ke liye 1 dabaye\n");
			printf(" data plans k liye 2 dabaye\n");
			printf(" customer care k liye 3 dabaye\n");
			printf("enter your choice");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:printf("apka balance  42033\n");
				break;
				case 2:printf("Upalabdh Data Plan: 1.5GB/day 28 din ke liye\n");
				break;
				case 3:printf("Customer care se joda ja raha hai...\n");
				break;
				default:printf("Galat vikalp chuna gaya\n");
				
			}
			break;
			 default:
            printf("Invalid language choice\n");
				
			
			
			
			
	}
	
	
}
