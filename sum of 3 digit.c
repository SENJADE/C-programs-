#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter a three digit number");
    scanf("%d",&a);
    b=a%10;
    c=a%100;
    e=c/10;
    d=a/100;
    printf("Sum of digit is %d",b+e+d);
    return 0;
}