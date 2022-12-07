#include<stdio.h>

int Natural();

int main()

{   int n;

    printf("Enter Your Number");

    scanf("%d",&n);

    Natural(n);

    return 0;

}

int Natural(int n)

{
    int i;
    for (i = 1; i <= n; i++)

    {

        printf("%d\n",i);

    }


}

