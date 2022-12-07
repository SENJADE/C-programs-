#include<stdio.h>


int main()


{   int i;





    printf("Enter Year");

    scanf("%d",&i);

    switch (i%4==0)

    {
    case 1 :
        printf("leap year");
        break ;

    case 0:
        printf("Non leap Year");


    default:

        break;

    }




    return 0;


}



