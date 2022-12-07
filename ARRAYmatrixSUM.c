#include <stdio.h>
int main(int argc, char const *argv[])
{
   int a[100][100], b[100][100], i, j, c[100][100], m, n;
   printf("Enter the size of row and coloumn of both matrix");
   scanf("%d%d", &m, &n);
   printf("Enter values of matrix first");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         scanf("%d", &a[i][j]);
      }
   }
   printf("Enter values of matrix second");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         scanf("%d", &b[i][j]);
      }
   }
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         c[i][j] = a[i][j] + b[i][j];
      }
   }
   printf("Sum of matrix is ---\n");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf("%d  ", c[i][j]);
      }
      printf("\n");
   }

   getch();
   return 0;
}