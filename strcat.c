#include<stdio.h>
#include<string.h>
void mystrcat(char *des, const char *src)
{
    while(*des != '\0')
    {
        des++;
    }
    while(*src != '\0')
    {
        *des = *src;
        des++;
        src++;
    }
    *des = '\0';
}
int main()
{
    char str1[] = "Amit";
    char str2[] = "Singh";
    mystrcat(str1," ");
    mystrcat(str1,str2);
    printf("%s",str1);
}