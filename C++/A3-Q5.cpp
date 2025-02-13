#include <iostream>
using namespace std;
class Integer {
private:
    int value;
public:
    Integer(int val) : value(val) {}
    unsigned long long operator!() const {
        if (value < 0) {
            cerr << "Error: Factorial is not defined for negative numbers." << endl;
            return 0;
        }
        unsigned long long fact = 1;
        for (int i = 2; i <= value; ++i) {
            fact *= i;
        }
        return fact;
    }
    int getValue() const {
        return value;
    }
};
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    Integer obj(num);
    unsigned long long fact = !obj;
    cout << "Factorial of " << obj.getValue() << " is: " << fact << endl;
    return 0;
}