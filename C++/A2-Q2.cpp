#include <iostream>
using namespace std;
struct Date{
    int D;
    int M;
    int Y;
};
void input(Date &date) {
    cout << "Enter a date DD/MM/YYYY: ";
    char slash;
    cin >> date.D>> slash >> date.M>> slash >> date.Y;
}
void display(const Date &date) {
    cout << date.D<< '/' << date.M<< '/' << date.Y<<endl;
}
int main() {
    Date myDate;
    input(myDate);
    cout << "You entered: ";
    display(myDate);
    return 0;
}