#include<stdio.h>
#include<conio.h>
int main()
{   int a;
    printf("Enter your number");
    scanf("%d",&a);
    if (a>99)
    {

        if(a<1000)
        {
            printf("Three Digit");
        }
        else
        {
            printf("Nn Three Digit");
        }
    }
    else
    {
        printf("Nn Three Digit");
    }
    return 0;
}
