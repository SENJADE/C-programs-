#include<stdio.h>


int main()


{   int a,b,i,n;

    printf("Enter two number");

    scanf("%d%d",&a,&b);

    for (i = 1; i!=0; i++)

    {

        if (i%a==0 && i%b==0 )

        {

            printf("LCM is %d",i);

            break ;
        }

    }





    return 0;


}



