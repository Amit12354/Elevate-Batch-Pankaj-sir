#include<stdio.h>
#include<string.h>
void mystrrev(char *ptr)
{
    int length = sizeof(ptr);
    int start = 0,last = length-1;
    while(start < last)
    {
       char temp;
       temp = ptr[start];
       ptr[start] = ptr[last];
       ptr[last] = temp;
       start++;
       last--;
    }
}
int main()
{
    char arr[] = "AMIT";
    mystrrev(arr);
    printf("%s",arr);
    return 0;
}