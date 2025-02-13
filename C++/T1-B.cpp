// Check Error in Code.
#include<iostream>
using namespace std;
int arr[]={1,2,3,4,5};
int&getElement(int index)
{
    return arr[index];
}
int main()
{
    getElement(2)=10;
    cout<<arr[2];
    return 0;
}
