#include <iostream>
using namespace std;
class Mother {
public:
    void display() {
        cout << "The mother class." << endl;}
};
class Daughter : public Mother {
public:
    void display() {
        cout << "The daughter class." << endl;}
};
int main() {
    Daughter daughter;
    daughter.display();
    daughter.Mother::display();
    return 0;
}
