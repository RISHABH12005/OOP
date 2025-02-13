// Code of Friend Function With Argument.
#include<iostream>
using namespace std;
class demo
{
    int data;
    friend void display(demo&);
public:
    void get(int a)
    {
        data = a;
    }
};
void display(demo& ob)
{
    cout << "value of data: " << ob.data;
}
int main()
{
    demo ob;
    ob.get(10);
    display(ob);
    return 0;
}
class B;
class A
{
    int data;
    friend int add(A&, B&);
public:
    void get(int a)
    {
        data = a;
    }
};
class B
{
    int key;
    friend int add(A&, B&);
public:
    void get(int a)
    {
        key = a;
    }
};
int add(A& a, B& b)
{
    return a.data + b.key;
}
int main()
{
    A a;
    B b;
    a.get(1);
    b.get(3);
    cout << "Sum: " << add(a, b) << endl;
    return 0;
}
