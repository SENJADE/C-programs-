#include<stdio.h>
int grt();
int main(int argc, char const *argv[])
{
int a[100],n,i;
printf("Enter array size");
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
scanf("%d",&a[i]);
}
printf("Greter of all number is %d",grt(a,n));


return 0;
}
int grt(int b[],int n)
{
    int i,j,p;
for ( i = 0; i <=9 ; i++)
{
    for ( j=i+1 ; j<n ;j++ )
    {       if (b[i]<b[j])
       {
       p=b[i];
       b[i]=b[j];
       b[j];
       }
       
    }
    
}



return b[0];

}