#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[100], b[100];
    int i, j, n;
    printf("Enter array size");
    scanf("%d", &n);
    printf("Enter your values");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = 0;
        b[i] = a[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}