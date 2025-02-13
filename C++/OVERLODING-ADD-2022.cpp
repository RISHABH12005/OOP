#include <iostream>
#include <cstring>
using namespace std;
#define max 100
class String {
private:
    char str[max];
public:
    String() { strcpy(str, ""); }
    String(const char s[]) { strcpy(str, s); }
    void display() const { cout << str << endl; }
    friend String operator+(const String& s1, const String& s2);
};
String operator+(const String& s1, const String& s2) {
    if (strlen(s1.str) + strlen(s2.str) >= max) {
        cout << "String Overflow" << endl;
        return String("");
    }
    char temp[max];
    strcpy(temp, s1.str);
    strcat(temp, ": ");
    strcat(temp, s2.str);
    return String(temp);
}
int main() {
    String s1("Object oriented programming");
    String s2("Operator overloading");
    String result = s1 + s2; 
    result.display();
    return 0;
}