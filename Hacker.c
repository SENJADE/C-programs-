#include <stdio.h>
int sum();
int main(int argc, char const *argv[])
{
    int a[1000], i, n;
    char g;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%c",&g);

    printf("%d", sum(a, n));
    return 0;
}
int sum(int a[], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}