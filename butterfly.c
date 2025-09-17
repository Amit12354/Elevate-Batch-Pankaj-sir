#include<stdio.h>
int main()
{
    int n = 5;
    for(int row = 1;row <= n; row++)
    {
        for(int col = 1; col <= row; col++)
        {
             printf("*");
        }
        for(int space  =1; space <= 2*(n-row); space++)
        {
            printf(" ");
        }
        for(int col = 1; col <= row; col++)
        {
             printf("*");
        }
        printf("\n");
    }
    for(int row =1; row <= n; row++)
    {
        for(int star = 1; star <= n+1-row; star++)
        {
            printf("*");
        }
        for(int space  = 1; space <= 2*(row-1); space++)
        {
            printf(" ");
        }
        for(int star = 1; star <= n+1-row; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}