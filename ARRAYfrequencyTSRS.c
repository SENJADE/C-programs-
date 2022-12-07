#include <stdio.h>
int dup();
int main(int argc, char const *argv[])
{
    int a[100], i, n;
    printf("Enter size of array");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    dup(a,n);

    return 0;
}
int dup(int b[], int n)
{
    int i;
    for (i = 0; i < b[i]; i++)
    {
        printf("%d",b[i]);
    }

    printf("\n%d", i);
}
