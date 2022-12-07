#include<stdio.h>


int main()


{


    int a,i,s=0;


    printf("Enter How many natural numbers SUM \nyou have to print of Cubes--");


    scanf("%d",&a);


    for ( i = 1; i <=a ; i++)
    {
        s=s+(i*i*i);
    }
    printf("%d",s);

    return 0;


}



