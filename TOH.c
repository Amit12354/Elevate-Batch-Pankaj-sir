#include<stdio.h>
void TOH(int n,char source,char desc,char aux)
{
    if(n == 1)
    {
        printf("%c--->%c\n",source,desc);
    }
    else{
        TOH(n-1,source,aux,desc);
        printf("%c--->%c\n",source,desc);
        TOH(n-1,aux,desc,source);
    }
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    TOH(n,'A','C','B');
}