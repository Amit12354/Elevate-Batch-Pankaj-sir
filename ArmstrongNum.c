#include<stdio.h>
int main()
{
    int n,sum=0,last,c=0,a,num;
    printf("Enter the number");
    scanf("%d",&n);
    num = a = n;
    while(n != 0)
    {
        n = n / 10;
        c++;
    }
    while(a != 0)
    {
        last = a % 10;
        a = a / 10;
        int prod = 1;
        for(int  i = 1; i <= c; i++)
        {
            prod = prod * last;
        }
        sum = sum +  prod;
    }
    if(sum == num)
    {
        printf("Armstrong number is %d",num);
    }
    else{
        printf(" %d Not Armstrong number",num);
    }
    return 0;
}