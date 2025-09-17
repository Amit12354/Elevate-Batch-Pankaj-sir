#include<stdio.h>
int main()
{
    int n,digit,ans=0,place= 1;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n != 0)
    {
        digit = n % 10;
        if(digit == 0)
        digit = 9;
    ans += digit*place;
    n /= 10;
    place*=10; 
    }
    printf("%d",ans);
}