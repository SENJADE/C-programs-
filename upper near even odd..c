#include<stdio.h>



int main()



{
    int i,a;

    scanf("%d",&i);

    switch (i%2==0)

    {



    case 1 :

        printf("uper nearest even no. is %d",i+2);
        break ;

    case 0 :
        printf("Upper nearest odd number is %d",i+2);

    default:

        break;
    }

    return 0;



}



