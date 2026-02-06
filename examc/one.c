#include<stdio.h>
int main()
{
	char str[20];
	
	printf("enter a string:-");
	scanf("%s",&str);
	switch(str[0])
	{
		case 'a':printf("vowel");
		break;
		
		case 'e':printf("vowel");
		break;
			case 'i':printf("vowel");
		break;
			case 'o':printf("vowel");
		break;
			case 'u':printf("vowel");
		break;
		default:
			printf("not vowel");
		
	}
}
