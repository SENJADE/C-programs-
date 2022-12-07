#include<stdio.h>


int main()


{   int a,b,i,n=1;

    while(n)

    {
        printf("Enter number from folowing\n1.Addition\n2.Substraction\n3.Multiplication\n4.Devide\n 5.Exit");

        scanf("%d",&i);

        switch (i)

        {



        case 1:
            printf("Enter Two number\n");
            scanf("%d%d",&a,&b);
            printf("Adition is %d\n",a+b);

            break ;

        case 2:
            printf("Enter Two number");
            scanf("%d%d",&a,&b);
            printf("Substraction is %d\n",a-b);

            break ;

        case 3:
            printf("Enter Two number");
            scanf("%d%d",&a,&b);
            printf("Multiplication is %d\n",a*b);

            break ;

        case 4:
            printf("Enter Two number");
            scanf("%d%d",&a,&b);
            printf("division is %d \n",a/b);

            break ;
        case 5:

            break ;


        default :
            printf("Wrong Input\n");

            break;

        }
        if(i==5)
            break;
    }


    return 0;


}



