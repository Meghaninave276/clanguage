#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter a num:");
    scanf("%d",&num);
    int temp=num/2;
    temp=temp*2;
    if(temp==num)
    {
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }

    
}