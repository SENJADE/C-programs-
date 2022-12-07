#include<stdio.h>

float area();


int main()

{

    int r ;

    printf("Enter Your Radius");

    scanf("%d",&r);

    printf("%f",area( r ));
    getch();
    return 0;

}

float area( int r)

{
    float n;
    n=r*r*3.141;

    return n ;



}

