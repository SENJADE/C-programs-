//prgram to swap two value without 3rd variable
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Your number ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("values are %d and %d ",a,b);
    return 0;
}