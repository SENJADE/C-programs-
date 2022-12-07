#include<stdio.h>

int SI();


int main()

{   int p,r,t;

    printf("Enter Your Principle,rate and time");

    scanf("%d%d%d",&p,&r,&t);

    SI(p,r,t);

    printf("%d",SI(p,r,t));

    return 0;

}

int SI( int p,int r,int t)

{
    int si;
    si=(p*r*t)/100;

    return si;



}

