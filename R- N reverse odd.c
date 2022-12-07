#include<stdio.h>

int pnt();

int main()

{

    int n;

    printf("Enter your number");

    scanf("%d",&n);
    n=(n*2)-1;
    pnt(n);

    return 0;



}

int pnt(int n)

{

    n==1;
    if(n>0)

    {

        printf("%d\n",n);
        pnt(n-2);


    }



}



