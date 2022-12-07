#include<stdio.h>

int fact();

int main()

{

    int n,r,a;

    printf("Enter your N and R for combinatin");

    scanf("%d%d",&n,&r);

    a=fact(n)/(fact(r)*fact(n-r));

    printf("Your combnation value is %d",a);




    return 0;

}

int fact(int n)

{
    int i,f=1;
    for ( i = n; i > 1; i--)

    {

        f=f*i;

    }

    return f;

}

