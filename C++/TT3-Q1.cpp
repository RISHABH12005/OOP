// Check Error in Code.
#include<iostream>
using namespace std;
void info(const char stuname[], const char departmentname[] = "CSE") {
    cout << "student Name: " << stuname << endl;
    cout << "department: " << departmentname << endl;
}
int main() {
    const char stu1[] = "Rishabh";
    const char stu2[] = "Ishu";
    const char department1[] = "Maths";
    const char department2[] = "Physics";
    info(stu1, department1);
    info(stu2, department2);
    return 0;
}
