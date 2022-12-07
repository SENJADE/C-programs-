#include<stdio.h>
int main(int argc, char const *argv[])
{
int a[10][10],n,m,j,i;
printf("Enter the no. of Row and coloumn");
scanf("%d %d",&m,&n);

printf("Enter your matrix");
for  (i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}
for  (i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}


return 0;
}