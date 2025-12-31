#include<stdio.h>
#include<conio.h>
 int main()
 {
 		int n;
 	printf("enter n:");
 	scanf("%d",&n);
 
 	do
 	{
 		if(n%2==0)
 		{
 				printf("%d ",n);
		 }
 	
 		n--;
 		
	 }while(n>=1);
 }
