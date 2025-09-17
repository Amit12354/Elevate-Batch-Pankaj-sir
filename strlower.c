#include<stdio.h>
int main()
{
    char str[20],lower_str[20];
    int i = 0, j = 0;
    printf("Enter the upper string\n");
   // scanf("%s",str);
   gets(str);
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        lower_str[j] = str[i]+32;
    else
    lower_str[j] = str[i];
i++,j++;
    }
    lower_str[j] = '\0';
    //printf("%s",lower_str);
    puts(lower_str);
    return 0;
}