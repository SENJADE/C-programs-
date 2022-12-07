#include<stdio.h>


int main()


{


    int a,i,s=0;


    printf("Enter How many natural numbers SUM you have to print--");


    scanf("%d",&a);

    for ( i = 1; i <=a ; i++)
    {
        s=s+i;
    }
    printf("%d",s);

    return 0;


}



