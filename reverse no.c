#include<stdio.h>


int main()


{   int i,n,remainder,r=0;

    printf("Enter number");

    scanf("%d",&n);

    while (n!=0)

    {

        remainder=n%10;

        n=n/10;
        r=r*10+remainder;


    }

    printf("%d",r);




    return 0;


}



