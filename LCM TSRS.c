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
    for(i=1; i!=0; i++)
    {
        if(i%a==0 && i%b==0)
        {   c=i;
            break ;
        }
    }

    return c;
}