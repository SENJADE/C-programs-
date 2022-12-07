#include<stdio.h>

int pnt();

int main()

{

    int n;

    printf("Enter your number");

    scanf("%d",&n);
    n=n*2;
    pnt(n);

    return 0;



}

int pnt(int n)

{


    if(n>0)

    {
        pnt(n-2);
        printf("%d\n",n);



    }



}



