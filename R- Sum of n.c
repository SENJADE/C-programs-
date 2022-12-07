#include<stdio.h>

int Sum();

int main()

{

    int n;

    printf("Enter your number");

    scanf("%d",&n);

    printf("The sum is %d ",Sum(n));

    return 0;



}

int Sum(int n)

{


    if(n==1)

        return 1;



    return n+Sum(n-1);



}



