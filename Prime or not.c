#include<stdio.h>


int main()


{


    int n,m=0,x=0, i;


    printf("Enter a Number--");


    scanf("%d",&n);
    m=n/2;
    for ( i = 2; i <= m ; i++)
    {
        if(n%i==0)
        {
           printf("Number is not prime");
           x=1;
           break;
        


        }
    }
if(x==0)
printf("number is prime");    

  

    return 0;


}



