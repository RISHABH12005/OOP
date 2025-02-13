#include <iostream>
using namespace std;
class Demo {
public:
    Demo() {
        cout << "Constructor" << endl;
    }
    ~Demo() {
        cout << "Destructor" << endl;
    }
};
Demo globalObj;
int main() {
    cout << "Start" << endl;
    cout << "End" << endl;
    return 0;
}
