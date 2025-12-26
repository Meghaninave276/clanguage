#include<stdio.h>
#include<conio.h>
 int main()
 {
    int per;
    printf("enter a per between(1-100):=");
    scanf("%d",&per);
    if(per>100 || per<0)
    {
        printf("enter a valid input");

    }
    else if (per>=91 && per<=100)
    {
        
        printf("your grade is A+");
    }
    else if (per>=81 && per<=90)
    {
        
        printf("your grade is A");
    }
    else if (per>=71 && per<=80)
    {
        
        printf("your grade is B+");
    }
    else if (per>=61 && per<=70)
    {
        
        printf("your grade is B");
    }
    else if (per>=51 && per<=60)
    {
        
        printf("your grade is C");
    }
    else if (per>=41 && per<=50)
    {
        
        printf("your grade is D");
    }
   
    
    else
    {
        printf("you are failed!");

    }
    return 0;
 }