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
    printf("    %d",dup(a, n));

    return 0;
}
int dup(int b[], int n)
{
    int i, j, p;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)

        {
            if (b[i] < b[j])
            {
                p = b[i];
                b[i] = b[j];
                b[j] = p;
            }
        }
    } for (i = 0; i < n; i++)
    {
    printf("%d \n", b[i]);
   }

    

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (b[i] == b[j])
            {
                return b[j];
            }
        }
    }
}
