// Check Error in Code.
#include<iostream>
using namespace std;
void print(int*arr[])
{
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
}
int main()
{
    int*arr[8];
    print(arr);
    return 0;
}
