#include<iostream>
using namespace std;
int foundEle(int arr[],int length)
{
    int key = 46;
    for(int i = 0; i < length; i++)
    {
    if(arr[i] == key)
    {
    return i;
    }
    }
    return -1;
}
int main()
{
    int arr[] = {12,23,34,45,46};
    int length = sizeof(arr)/sizeof(arr[0]);
    int newFound = foundEle(arr,length);
    cout<<newFound;
}