#include<stdio.h>
void decTohexa(int n)
{
    if(n == 0)
    {
        return;
    }
    else{
        decTohexa(n/16);
        if(n % 16 <= 9)
        {
        printf("%d",n%16);
    }
    else{
        printf("%c",55 + (n%16));
    }
    }
}
int main()
{
    decTohexa(2500);
}