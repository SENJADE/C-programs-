#include<stdio.h>


int Prime();


int main()


{   int n;


    printf("Enter Your Number");


    scanf("%d",&n);

    printf("Next prime is %d",Prime(n) );

    return 0;


}


int Prime(int n)


{


    int f;
    f=n+2;
    return f;
}



