#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}
int main()
{ 
    int (*p)(int , int);
    int choice,a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("\nSelect operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
    p = &add;
    printf("%d",(*p)(a,b));
    break;
    case 2:
    p = &sub;
    printf("%d",(*p)(a,b));
    break;
    case 3:
    p = &multi;
    printf("%d",(*p)(a,b));
    break;
    case 4:
    p = &divide;
    printf("%d",(*p)(a,b));
    default :
    printf("Not vaild");
    } 
    return 0;
}