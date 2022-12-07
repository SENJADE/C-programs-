#include<stdio.h>


int main()


{


    int a,i,s=0;


    printf("Enter How many natural numbers SUM you have to print--");


    scanf("%d",&a);
    a=a*2;

    for ( i = 0; i <=a ; i=i+2)
    {
        s=s+i;
    }
    printf("%d",s);

    return 0;


}



