#include<iostream>
using namespace std;
class employee
{
    char name[10];
    int id;
    int salary;
    static int c;
    public:void indata()
        {
            cout<<"Enter the Name: ";
            cin>>name;
            cout<<"Enter the Employee: ";
            cin>>id;
            cout<<"Enter the Salary: ";
            cin>>salary;
            c++;
        }
        void outdata()
        {
            cout<<"Employee "<<c<<" Name is: "<<name<<endl;
            cout<<"Employee "<<c<<" ID is: "<<id<<endl;
            cout<<"Employee "<<c<<" Salary is: "<<salary<<endl;
        }
        static void get()
        {
            cout<<"The value counted is: "<<c<<endl;
        }
};
    int employee::c;
    int main()
    {
        employee e1,e2;
        e1.indata();
        cout<<endl;
        e1.outdata();
        cout<<endl;
        e2.indata();
        cout<<endl;
        e2.outdata();
        cout<<endl;
        employee::get();
    }