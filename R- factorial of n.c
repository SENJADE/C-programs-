#include<stdio.h>

int fact();

int main()

{

    int n;

    printf("Enter your number");

    scanf("%d",&n);

    printf("The Factorial is %d ",fact(n));

    return 0;



}

int fact(int n)

{


    if(n==1 || n==0)

        return 1;



    return n*fact(n-1);



}



