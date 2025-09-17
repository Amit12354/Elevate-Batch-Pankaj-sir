#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float root1,root2,D,deno;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    D = (b*b) - 4*a*c;
    deno = 2*a;
    if(D > 0)
    {
        printf("real roots\n");
        root1 = (-b + sqrt(D)) / deno;
        root2 = (-b - sqrt(D)) / deno;
        printf("Roots are: %.2f and %.2f\n", root1, root2);
    }
    else if(D == 0)
    {
        printf("equal root\n");
        root1 = -b /deno;
        root2 = -b /deno;
        printf("root1 %f\t root2 %f",root1,root2);
    }
    else
    printf("Imagninary roots ");
return 0;
}