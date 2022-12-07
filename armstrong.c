#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, n, i, z = 0,y, x = 0, count = 0,j;
    
    printf("Enter your number");
    scanf("%d", &a);
    j=a;
    y=a;

    while (y != 0)
    {
         y= y / 10;
        count = count + 1;
    }
    printf("%d\n", count);

    for (i = 0; i < count; i++)
    {
        x = a % 10;
        a = a / 10;
        z = z + (x * x * x);
    }
    printf("%d\n", z);
    if (z == j )
    {
        printf("Number is armstrong %d", z);
    }
    else
    {
        printf("Number is not armstrong %d", z);
    }

    return 0;
}