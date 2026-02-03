#include<stdio.h>
int main()
{
	 char str[]="hello";
	 char *p = str;
	 int count = 0;
	 
	
	while(*p++)
	count++;
	printf("%d ",count);
}
