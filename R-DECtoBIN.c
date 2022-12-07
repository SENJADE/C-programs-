#include <stdio.h>
void bin();
 int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your number");
    scanf("%d", &a);
   printf("Binary is ");
    bin(a);
    return 0;
}
void bin(int a)
{
    if (a==0)
      return ;

    bin(a>>1);

    printf("%d",a&1);
}