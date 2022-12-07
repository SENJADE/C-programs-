#include<stdio.h>


int main()


{   int i,a,b,c,n=1;

    while (n)

    {

        printf("Enter choise\n 1. Isosceles trianle \n 2.Right angle trianle \n 3. Equilateral triangle\n 4. Exit ");

        scanf("%d",&i);

        switch (i)

        {

        case 1:

            printf("Enter Three numbers ");

            scanf("%d%d%d",&a,&b,&c);

            if (a==b || b==c || a==c)

            {

                printf("Isoseles Triangle\n");

            } else

            {

                printf("Not a Isoseles\n");

            }

            break;


        case 2:

            printf("Enter Three numbers ");

            scanf("%d%d%d",&a,&b,&c);

            if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)

            {

                printf("right Angle Triangle\n");

            } else

            {

                printf("Not a Right angled triangle\n ");

            }

            break;

        case 3:

            printf("Enter Three numbers ");

            scanf("%d%d%d",&a,&b,&c);

            if (a==b ) && ( b==c )

            {

                printf("Equilateral Triangle\n");

            } else

            {

                printf("Not a Equilateral\n");

            }

            break;


        case 4:

            break;

        default:
            printf("wrong input enter again \n");
            break;

        }

        if (i==4)

        {

            break;

        }

    }

    return 0;


}



