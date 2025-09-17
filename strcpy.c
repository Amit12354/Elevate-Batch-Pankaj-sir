#include<stdio.h>
#include<string.h>
void mystrcpy(char *des,char const *src)
{
    while(*src != '\0')
    {
        *des = *src;
        des++;
        src++; 
    }
    *des = '\0';
//while(*des++ = *src++);
}
int main()
{
    // char arr[10];
    // mystrcpy(arr,"amit");
    // printf("%s",arr);
   char str1[10] = {"Amit"};
    char str2[15] = {"Amit singh"};
    mystrcpy(str2+2,str1);
    printf("%s",str2);
}