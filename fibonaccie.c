#include<stdio.h>
int fibonaccie(int n)
{
    if(n == 0)
    return 0;
    else if(n == 1)
    return 1;
    else
    return (fibonaccie(n-1) + fibonaccie(n-2));
}
int main()
{
    int num,result;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i = 0; i < num; i++)
    {
        result = fibonaccie(i);
        printf("%d\t",result);
    }
    return 0;
}