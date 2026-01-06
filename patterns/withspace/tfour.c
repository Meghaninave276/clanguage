#include<stdio.h>
 int main()
 {
 	int i,j,k;
 	char l;
 	for(i=5; i>=1; i--)
 	{
 		for(k=i; k<5; k++)
 		{
 			printf("  ");
 			
		 }
 		l='A';
 		for(j=1; j<=i; j++)
 		{
 			printf("%c ",l);
 			l++;
 			
		 }
		 printf("\n");
	 }
 }
