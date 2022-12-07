#include<stdio.h>
#include<conio.h>
int main()
{   float a,b,c,d;
    printf("Enter Cost price");
    scanf("%f",&a);
    printf("Enter Selling price");
    scanf("%f",&b);
    if (a<b)
    {
        c=((b-a)/a)*100;


        printf("profit percent is %0.2f",c);

    }
    else
    {
        d=((a-b)/a)*100;
        printf("Loss percntage is %0.2f",d);
    }
    return 0;
}
