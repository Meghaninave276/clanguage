#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter a: enter b: enter c:");
    scanf("%d %d %d",&a,&b,&c);
    //a,b,c
    if(a>b)
    {
        //b
        if(a>c)
        {
            //a
            printf("a is max");

        }
        else
        {
            //c
            printf("c is max");

        }

    }
    else
    {
        if(b>c)
        {
            //b
            printf("b is max");

        }
        else
        {

            //c
             printf("c is max");
        }

    }
    return 0;
}