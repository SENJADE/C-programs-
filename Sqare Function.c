#include<stdio.h>


int Square();


int main()


{   int a;


    printf("Enter Your Number");


    scanf("%d",&a);

    printf("\n");
    printf("Square  is %d",Square(a));

    return 0;


}


int Square(int a)


{   int i;
    i=a*a;
    return i;
}


