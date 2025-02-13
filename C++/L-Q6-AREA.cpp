// Code of Find the Area Rectangle.
#include<iostream>
using namespace std;
class area
{
public:
    int length;
    int breath;
    void setdim(int l,int b)
    {
        length=l;
        breath=b;
    }
    int getarea()
    {
        return length*breath;
    }
};
int main()
{
    area a;
    a.setdim(4,5);
    cout<<a.getarea()<<endl;
    return 0;
}
