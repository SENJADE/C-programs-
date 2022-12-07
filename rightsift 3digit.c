#include<stdio.h>
#include<conio.h>
int main()
{   int a,b,c,d;
    printf("Enter Three digit number");
    scanf("%d",&a);
    b=a%10;
    c=b*100;
    d=a/10;
    printf("Changed Value is %d",c+d);
    return 0;
}
