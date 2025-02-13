//Code of Friend Function Not Argument.
#include<iostream>
using namespace std;
class demo{
int data;
friend void print();};
void print()
{demo ob;
cout<<"enter the value of data:N";
cin>>ob.data;
cout<<"value of data is: "<<ob.data;}
int main()
{print();
return 0;}
