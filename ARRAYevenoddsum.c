#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10], i,es=0,os=0;
    printf("Enter your numbers");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=9 ; i++)
    {
        if (a[i]%2==0)
        {
          es=es+a[i];
        
        }else
        {
            os=os+a[i];
        }
        
        
    }
    printf("even sum is == %d  & odd sum is== %d",es,os);
    
    return 0;
}
