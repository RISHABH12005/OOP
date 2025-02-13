// Code of Static Member Function.
#include<iostream>
using namespace std;
class demo{
static int data;
public:static void get(int);
    static int print();};
    int demo::data;
    void demo::get(int a)
    {data=a;}
    int demo::print()
    {return data;}
    int main()
    {demo ob;
    int a;
    cout<<"enter the value a: ";
    cin>>a;
    demo::get(a);}
