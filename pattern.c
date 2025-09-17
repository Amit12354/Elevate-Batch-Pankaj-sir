#include <stdio.h>

int main()
{
   int row ,col,n;
   printf("ENter the number");
   scanf("%d",&n);
   for(int row = 1; row <= n; row++)
   {
       for(int space = 1; space <=n-row; space++)
       {
           printf(" ");
       }
       for(int col = 1; col <=2*row-1; col++)
       {
           printf("*");
       }
       printf("\n");
   }

    return 0;
}
