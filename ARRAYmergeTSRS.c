#include <stdio.h>
int add();
int main(int argc, char const *argv[])
{
    int a[100], b[100], i, n, m, z;
    printf("Enter size of 1st array ");
    scanf("%d", &n);
    printf("Enter your %d values ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter size of 2nd array ");
    scanf("%d", &m);
    printf("Enter your %d values ", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    z = m + n;
    add(a, b, n, m, z);
return 0;
}
int add(int a[], int b[], int n, int m, int z)
{
    int c[100], i, j,p;

    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (j = n; j < z;  j++)
    {
        c[j] = b[j-n];
    }
     for (i = 0; i < z; i++)
    {
        for (j = i + 1; j < z; j++)

        {
            if (c[i] < c[j])
            {
                p = c[i];
                c[i] = c[j];
                c[j]=p;
            }
        }
    }


    for (i = 0; i < z; i++)
    {
        printf("%d ", c[i]);
    }
}