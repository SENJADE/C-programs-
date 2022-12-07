#include<stdio.h>
#include<conio.h>
int main()
{   int a;
    printf("Enter Year");
    scanf("%d",&a);
    if (a%4==0)
    {

        printf("Leap year");

    }
    else
    {
        printf("Non Leap year");
    }
    return 0;
}
