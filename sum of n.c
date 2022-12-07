#include <stdio.h>

int main()
{
    int i,a,s;
    printf("Enter value of N ");
    scanf("%d",&a);
    for(i=0,s=0; i<=a; i++)
        s=s+i;

    printf("%d",s);
    return 0;
}