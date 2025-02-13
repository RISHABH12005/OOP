#include <iostream>
using namespace std;
class FLOAT {
private:
    float value;
public:
    FLOAT(float val) : value(val) {}
    FLOAT operator+(const FLOAT& other) const {
        return FLOAT(value + other.value);
    }
    FLOAT operator-(const FLOAT& other) const {
        return FLOAT(value - other.value);
    }
    FLOAT operator*(const FLOAT& other) const {
        return FLOAT(value * other.value);
    }
    FLOAT operator/(const FLOAT& other) const {
        if (other.value != 0) {
            return FLOAT(value / other.value);
        } else {
            cerr << "Error: Division by zero!" << endl;
            // cerr is same as the cout but more efficeanr than the cout
            return FLOAT(0);
        }
    }
    float getValue() const {
        return value;
    }
};
int main() {
    FLOAT a(5.5);
    FLOAT b(2.2);
    FLOAT sum = a + b;
    cout << "Sum: " << sum.getValue() << endl;
    FLOAT difference = a - b;
    cout << "Difference: " << difference.getValue() << endl;
    FLOAT product = a * b;
    cout << "Product: " << product.getValue() << endl;
    FLOAT quotient = a / b;
    cout << "Quotient: " << quotient.getValue() << endl;
    FLOAT zero(0);
    FLOAT result = a / zero;
    return 0;
}