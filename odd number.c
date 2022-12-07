#include <stdio.h>

int main()
{
    int i=1,a;
    printf("Enter howmany numbey you have to print ");
    scanf("%d",&a);
    while(i<=a)
    {
        printf("%d  ",i);
        i=i+2;
    }
    return 0;
}