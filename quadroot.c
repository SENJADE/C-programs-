#include<stdio.h>

#include<math.h>

int main()

{
  int D;
    float  a,b,c
    ,x,y,z,n;

    printf("Enter value of a b c of equation\n aX^2 + bX + C = 0");

    scanf("%f %f %f",&a,&b,&c);
    if(a>0) {
        D=(b*b)-4*a*c;


        switch (D>0)

        {

        case 1:

            x=(-b + sqrt(D))/2*a ;

            y=(-b - sqrt(D))/2*a ;

            printf("Roots are %0.1f  and  %0.1f  ",x,y);


            break ;

        case 0:

            switch (D<0)

            {

            case 1:
                x=-b/2*a;
                y =sqrt(-D)/2*a ;
                z=sqrt(-D)/2*a;
                printf("Roots are  %0.1f+%0.1fi   and  %0.1f-%0.1fi  ",x,y,x,z);

                break ;

            case 0:

                switch (D=0)

                {

                case 1:

                    x=-b/2*a;
                    y=-b/2*a;

                    printf("Roots are %0.1f  and %0.1f ",x,y);






                    break ;

                case 0:

                    break ;

                }


            }

        default:

            break;

        }





    }
    return 0;

}

