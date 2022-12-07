#include<stdio.h>

int sum();

int main()

{

int a;

printf("Enter Your number");

scanf("%d",&a);

printf("The sum is %d",sum(a));

return 0;

}

int sum(int a)

{
int ;
if(a==1)
return 1;
return (a*a+sum(a-1));

}

