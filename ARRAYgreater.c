#include<stdio.h>
int main(int argc, char const *argv[])
{
int a[10],i,j,p;
printf("Ener your numbers");
for ( i = 0; i <= 9; i++)
{
    scanf("%d",&a[i]);
}

for ( i = 0; i <=9 ; i++)
{
    for ( j=i+1 ; j<10 ;j++ )
    {       if (a[i]<a[j])
       {
       p=a[i];
       a[i]=a[j];
       a[j];
       }
       
    }
    
}



printf("Greater no. is %d",a[0]);
return 0;
}
