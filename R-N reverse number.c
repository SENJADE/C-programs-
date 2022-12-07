#include<stdio.h>

int pnt();

int main()

{

    int n;

    printf("Enter your number");

    scanf("%d",&n);

    pnt(n);

    return 0;



}

int pnt(int n)

{


    if(n>0)

    {
        printf("%d\n",n);
        pnt(n-=1);


    }



}



