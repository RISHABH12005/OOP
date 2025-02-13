#include<stdio.h>
void array(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
        if(arr[i]==0)
            c++;
    for(int i=0;i<c;i++)
        arr[i]=0;
    for(int i=c;i<n;i++)
        arr[i]=1;
}
void print(int arr[],int n)
{
    printf("Array is ");
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
}
int main()
{
    int arr[]={ 0, 1, 0, 1, 0, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    array(arr,n);
    print(arr,n);
    printf("%d",arr[0]);
    return 0;
}
