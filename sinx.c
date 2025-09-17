#include<stdio.h>
int main()
{
    int n,x,fact,prod;
    float sum = 0.0;
    printf("Enter the number");
    scanf("%d%d",&x,&n);
    int sign = 1;
    for(int i = 1; i <= n; i=i+2)
    {
        prod = 1;
        for(int j = 1; j <= i; j++)
        {
            prod = prod * x;
        }
        fact = 1;
        for(int k = 1; k <= i; k++)
        {
            fact = fact * k;
        }
        sum += sign * (prod*1.0)/fact;
        sign *= -1;
    }
    printf("%f",sum);
    return 0;
}