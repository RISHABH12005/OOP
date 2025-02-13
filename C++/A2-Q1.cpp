#include <iostream>
using namespace std;
struct Phone {
    int areaCode;
    int exchange;
    int no;
};
void input(Phone &phone) {
    cout << "Enter your area code, exchange, number: ";
    cin >> phone.areaCode >> phone.exchange >> phone.no;
}
void display(const Phone &phone) {
    cout << "("<< phone.areaCode <<")"<< phone.exchange<<"-"<<phone.no<<endl;
}
int main()
{
    Phone myno= {212, 767, 8900};
    Phone yourno;
    input(yourno);
    cout << "My number is ";
    display(myno);
    cout << "Your number is ";
    display(yourno);
    return 0;
}