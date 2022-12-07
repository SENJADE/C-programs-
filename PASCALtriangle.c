#include <stdio.h>
void pascaltriangle();
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter Number of row u have to print ");
    scanf("%d", &n);
    pascaltriangle(n);
    return 0;
}
void pascaltriangle(int n)
{
    int i, j;
   

    
    for (int i = 1; i <= n; i++)

    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a = a * (i - j) / j;
           
        } printf("\n");
    }
}