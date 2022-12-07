#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],i;
    float avg;
    printf("Enter your numbers");
    for ( i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <= 9; i++)
    {
        avg=avg+a[i];
    }
    printf("The average is %0.2f",avg/10);
    
    return 0;
}
