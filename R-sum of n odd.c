#include<stdio.h>

int sum();

int main()

{

int a;

printf("Enter Your number");

scanf("%d",&a);


a=a*2-1;


printf("The sum is %d",sum(a));




return 0;

}

int sum(int a)

{
if(a==1)
return 1;
return (a+sum(a-2));

}

