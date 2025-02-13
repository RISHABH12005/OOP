#include <iostream>
#include <string>
using namespace std;
bool Rotations(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) {
        return false;}
    string C= s1 + s1;
    return C.find(s2) != string::npos;
}
int main() {
    string s1, s2;
    cout << "Enter string S1: ";
    cin >> s1;
    cout << "Enter string S2: ";
    cin >> s2;
    if (Rotations(s1, s2)) {
        cout << "TRUE: S1 and S2 are rotations of each other." << endl;
    } else {
        cout << "FALSE: S1 and S2 are not rotations of each other." << endl;}
    return 0;
}