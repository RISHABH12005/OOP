// Check Error in Code.
#include<iostream>
#include<cmath>
using namespace std;
double square(double s) {
    return s * s;
}
double rectangle(double l,double w) {
    return l * w;
}
double circle(double r) {
    return 3.14 * r * r;
}
double triangle(double b,double h) {
    return 0.5 * b * h;
}
int main() {
    double s, l, w, r, b, h;
    s = 5;
    cout << "Area of the square: " << square(s) << endl;
    l = 4;
    w = 6;
    cout << "Area of the rectangle: " << rectangle(l, w) << endl;
    r = 3;
    cout << "Area of the circle: " << circle(r) << endl;
    b = 5;
    h = 8;
    cout << "Area of the triangle: " << triangle(b, h) << endl;
    return 0;
}
