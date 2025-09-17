#include<stdio.h>
#include<string.h>
int mystring(char const *ptr)
{
    int count = 0;
    while(*ptr != '\0')
    {
        ptr++;
        count++;
    }
    return count;
}
int main()
{
    char *p = "amit";
    int i = mystring(p);
    printf("%d",i);
    return 0;   
}