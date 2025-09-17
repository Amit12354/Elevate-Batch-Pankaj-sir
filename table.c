#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    for(int i = 1; i <= 10; i++)
    {
        for(int j = a; j <= b; j++)
        {
            printf("%dX%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}