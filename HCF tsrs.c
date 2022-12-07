#include<stdio.h>
int LCM();

int main()

{
    int a,b;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    printf("%d",LCM(a,b));
    return 0;
}


int LCM(int a, int b)
{
    int c,i ;
    for(i=2; i<=a || i>=b; i++)
    {
        if(a%i==0 || b%i==0)
        {   c=i;
            break ;
        }
    }

    return c;
}