#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float N) : real(N), imag(N) {}
    Complex(float realPart, float imagPart) : real(realPart), imag(imagPart) {}
    Complex sum(Complex N1, Complex N2) {
        Complex result;
        result.real = N1.real + N2.real;
        result.imag = N1.imag + N2.imag;
        return result;
    }
    void display() {
        cout << real;
        if (imag >= 0)
            cout << "+";
        cout << imag << "i";}
};
int main() {
    Complex N1(2, 3);
    Complex N2(4);
    Complex N3;       
    Complex result = N3.sum(N1, N2);
    cout << "1st complex No.:";
    N1.display();
    cout << endl;
    cout << "2nd complex No.:";
    N2.display();
    cout << endl;
    cout << "Sum of the 2 complex No.:";
    result.display();
    cout << endl;
    return 0;
}
