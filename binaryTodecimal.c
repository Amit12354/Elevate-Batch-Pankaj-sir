#include<stdio.h>
#include<math.h>
int main()
{
    int n = 1001,ans = 0;
    int i= 0;
    while(n != 0)
    {
        int digit= n % 10;
        ans += digit*pow(2,i);
        n/= 10;
        i++;
    }
    printf("%d",ans);
}