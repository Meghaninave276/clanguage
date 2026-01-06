#include<stdio.h>
 int main()
 {
 	int i,k,j;
 	char l;
 	for(i=1; i<=5; i++)
 	{
 		for(k=i; k>1; k--)
 		{
 			printf("  ");
 			
		 }
		 l='A'+i-1;
 		for(j=i; j<=5;j++)
 		{
 			printf("%c ",l);
 			l++;
 			
		 }
		 printf("\n");
	 }
 }
