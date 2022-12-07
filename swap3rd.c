//prgram to swap two value without 3rd variable 
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter Your number ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b; 
    a=a-b;
    printf("values are %d and %d ",a,b);
        return 0;
}