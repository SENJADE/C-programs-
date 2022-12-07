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

    int i,f;
    f=n*2;
    for (i = 1; i <= f ; i=i+2)

    {

        printf("%d\n",i);

    }


}

