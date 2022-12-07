#include<stdio.h>


int main()


{   int i,j,lines,space;
    scanf("%d",&lines);
    for (i = 1; i <= lines; i++)

    {

        for (space = 1; space <=i-1; space++)

        {

            printf(" ");


        }

        for (j = 1; j<=10-2*i+1; j++)

        {

            printf("*");

        }
        printf("\n");
    }

    return 0;


}



