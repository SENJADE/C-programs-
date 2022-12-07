#include<stdio.h>

int main()

{

    int a,i;

    printf("Enter How many odd natural number you to print --");

    scanf("%d",&a);
    a=a*2;
    for ( i = 1; i <=a ; i=i+2)

    {

        printf("\n%d",i);

    }

    return 0;

}

