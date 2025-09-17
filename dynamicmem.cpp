#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n = 5;
    int *p;
    p = (int*)malloc(n*sizeof(int));
    if(p == NULL)
    {
        cout<<"Memory is not available ";
        exit(1);
    }
    for(int i = 0; i < n; i++)
    {
        cin>>*(p+i);
    }
    for(int i = 0; i < n; i++)
    {
        cout<<p[i];
    }
    free(p);
    return 0;
}