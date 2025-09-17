#include<stdio.h>
int octalTodecimal(int n)
{
    return ((n == 0) ? 0 : (n % 10) + 8 * octalTodecimal(n / 10));
}
int decimalToBinary(int n)
{
    return ((n == 0) ? 0 : (n % 2) + 10 * decimalToBinary(n / 2));
}

int main()
{
    int n = 18;
    int decimal = octalTodecimal(n);
    int binary = decimalToBinary(decimal);
    printf("%d",binary);
}