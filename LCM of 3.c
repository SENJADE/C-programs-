#include<stdio.h>


int main()


{   int a,b,i,n,c;

    printf("Enter two number");

    scanf("%d%d%d",&a,&b,&c);

    for (i = 1; i!=0; i++)

    {

        if (i%a==0 && i%b==0 && i%c==0)

        {

            printf("LCM is %d",i);

            break ;
        }

    }





    return 0;


}



