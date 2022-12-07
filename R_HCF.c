#include<stdio.h>
int hcf();
int main(int argc, char const *argv[])
{
int a,b;
printf("Enter Your number");
scanf("%d%d",&a,&b);
if (a>b)
{
    printf("%d",hcf(a,b));
}else
{
    printf("%d",hcf(b,a));

}

return 0;
}
int hcf(int a,int b)
{
if (b==0)
{
   return a;

}
hcf(b,a%b);



}