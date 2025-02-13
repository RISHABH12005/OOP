#include <iostream>
#include <cmath>
using namespace std;
class Shape {
protected:
    double L1, L2;
public:
    Shape() {
        L1= L2 = 0;
    }
    void get_data() {
        cout << "Enter l/b/r: ";
        cin >> L1;
        cout << "Enter l/b/r: ";
        cin >> L2;
    }
    virtual double display_area() = 0;
};
class Rectangle: public Shape {
public:
    double display_area() {
        return L1 * L2;}
};
class Triangle: public Shape {
public:
    double display_area() {
        return 0.5 * L1 * L2;}
};
class Circle: public Shape {
public:
    double display_area() {
        return 3.1415 * L2 * L2;}
};
int main() {
    Shape *shape;
    char ch;
    cout << "Enter R for rectangle | T for triangle | C for circle: ";
    cin >> ch;
    if(ch == 'R') {
        shape = new Rectangle();
    } else if(ch == 'T') {
        shape = new Triangle();
    } else if(ch == 'C') {
        shape = new Circle();
    } else {
        cout << "Invalid choice !";
        return 0;
    }
    shape->get_data();
    cout << "The Area = " << shape->display_area() << endl;
    return 0;
}
