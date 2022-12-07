#include<stdio.h>
int count();

int main()
{
int a,z=0;
printf("Enter your number");
scanf("%d",&a);
z=count(a);
printf("%d",z);

    return 0;
}
int count(int a)
{
    static int x=0;
    if(a>0)
    {
     x++;
     return count(a/10);
    }else
    {
        return x;
    }
    

}