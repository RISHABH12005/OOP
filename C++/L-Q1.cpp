include<iostream>
using namespace std;
class demo{
int data;
public:void get(int);
    int print();};
    void demo::get(int a)
    {data=a;}
    int demo::print()
    {return data;}
    int main()
    {demo ob,ob1;
    int data;
    ob.get(10);
    cout<<"value of a: "<<ob.print()<<endl;
    cout<<"enter value of a: ";
    cin>>data;
    ob1.get(data);
    cout<<"value of a: "<<ob1.print()<<endl;
    return 0;}
