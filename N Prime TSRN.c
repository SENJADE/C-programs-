#include<stdio.h>


int Prime();


int main()


{   int n;


    printf("Enter Your Number");


    scanf("%d",&n);
    Prime(n);

    return 0;


}


int Prime(int n)


{   int i;
    n=n*2;
    for(i=1 ; i<=n ; i=i+2)
    {
        printf("%d\n",i);

    }

}


