#include<stdio.h>
int main()
{
    int n=1234,ans = 0;
    while(n !=0)
    {
        int digit = n % 10;
        ans =digit + ans*10;
        n/=10;
    }
    printf("%d",ans);
    return 0;
}