#include<stdio.h>
#include<conio.h>
int main()
{   int a,b;
    printf("Enter your number");
    scanf("%d",&a);
    b=a%10;
    a=a-b;
    printf("Value with last digit zero is %d",a);
    return 0;
}
