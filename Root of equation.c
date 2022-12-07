#include<stdio.h>

int main()

{

    int a,b,c,d;

    printf("Enter value of a,b,c");

    scanf("%d%d%d",&a,&b,&c);

    d=(b*b)-4*a*c;

    if (d>0 )

    {

        printf("Real and unequal ");

    } else if (d<0)

    {

        printf("Imaginary root");

    } else if(d==0)

    {

        printf("Real and equal",a);

    }

    return 0;

}

