// Check Error in Code.
#include<iostream>
using namespace std;
class Demo
{
public:
    int add(int a,int b){return(a+b);}
    double add(double a,double b){return(a+b);}
};
int main()
{
Demo obj;
cout<<obj.add(3,4.5);
return 0;
}
