#include<stdio.h>
#include<conio.h>
int main()
{   int a,b,c,d,e;
    float f;
    printf("Enter Your numbers of 5 subject\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5;
    if (f>33)
    {


        printf("You are PASS  and your percentage is %f",f);

    }
    else
    {

        printf("You are Fail and your percentage is %f",f);
    }
    return 0;
}
