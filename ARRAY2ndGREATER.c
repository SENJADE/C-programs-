#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10], i, j, n,N;
    printf("Enter value of N");
      scanf("%d", &N);
    printf("Enter your number");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)

        {
            if (a[i] < a[j])
            {
                n = a[i];
                a[i] = a[j];
                a[j]=n;
            }
        }
    }
printf("2nd greater no.is %d",a[1]);


  return 0;
}
