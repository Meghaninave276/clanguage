#include<stdio.h>
int main()
{
	int i=1;
	char l;
	l='a';
	
	do{
		printf("%c ",l);
		l+=4;
		i++;
		
	}while(i<=26);
}
