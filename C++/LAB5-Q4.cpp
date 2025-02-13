#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {
        cout << "Point constructor called with coordinates (" << x << "," << y << ")" << endl;}
    ~Point() {
        cout << "Point destructor called for point (" << x << "," << y << ")" << endl;}
};
class Rectangle {
private:
    Point topLeft;
    Point bottomRight;
public:
    Rectangle(int x1, int y1, int x2, int y2) : topLeft(x1, y1), bottomRight(x2, y2) {
        cout << "Rectangle constructor" << endl;}
    ~Rectangle() {
        cout << "Rectangle destructor" << endl;}
};
int main() {
    Rectangle rect(1, 2, 4, 6);
    return 0;
}