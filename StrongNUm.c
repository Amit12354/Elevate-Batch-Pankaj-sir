#include<stdio.h>
int main()
{
    int n ,prod,sum=0,a;
    printf("Enter the number");
    scanf("%d",&n);
    a=n;
    while(n !=0)
    {
        int prod = 1;
        int last = n % 10;
        n = n / 10;
        for(int i  =1; i <= last; i++)
        {
            prod = prod *i;
        }
        sum = sum +prod;
    }
    if(sum == a)
    {
        printf("%d is strong number",a);
    }
    else{
        printf("%d is not a strong number",a);
    }
    return 0;
}