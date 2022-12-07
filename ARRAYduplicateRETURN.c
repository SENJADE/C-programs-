#include<stdio.h>
int dup();
int main(int argc, char const *argv[])
{
int a[100],n,i;
printf("Enter size of array");
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
scanf("%d",&a[i]);
}

printf("%d",dup(a,n));
return 0;
}
int dup(int a[],int n)
{  
    int i;
    for ( i = 0; i < n; i++)
{
 if (a[i]==a[i+1] )
       return a[i];
 

}
}