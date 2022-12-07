#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter Your Character");
    scanf("%c",&c);
    if(c>=65)
    {
        if(c<=90)
        {
            printf("upper case");
        } else
            printf("lowercase");

    } else
        printf("lowercase");
    return 0;
}