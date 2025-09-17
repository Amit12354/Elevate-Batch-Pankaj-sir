#include<stdio.h>
int main()
{
    int n,x,prod,fact;
    float sum = 0.0;
    printf("Enter the number");
    scanf("%d%d",&x,&n);
    for(int i = 0; i <= n-1; i++)
    {
        prod=1;
        for(int j = 1; j <= i; j++){
            prod =prod * x;
        }
            fact =1;
            for(int k = 1; k <= i; k++)
            {
            fact = fact * k;
        }
            sum = sum + (prod*1.0)/fact;
            }
            printf("%f",sum);
}