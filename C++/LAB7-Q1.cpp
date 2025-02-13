#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    int rollNo;
    string name;
    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;}
};
class Exam : protected Student {
public:
    int marks[6];
    int subject;
    Exam(int rollNo, string name, int marks[]) : Student(rollNo, name) {
        for (int i = 0; i < 6; i++) {
            this->marks[i] = marks[i];}
        this->subject = 6;
        calculate();}
    void calculate() {
        int total_marks = 0;
        for (int i = 0; i < subject; i++) {
            total_marks += marks[i];}
        this->total_marks = total_marks;}
    int total_marks;
};
class Result : protected Exam {
public:
    Result(int rollNo, string name, int marks[6]) : Exam(rollNo, name, marks) {
        calculate();
    }
    float calculate() {
        return (float)total_marks / (subject * 100) * 100;}
    void display_result() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total_marks << endl;
        cout << "Percentage: " << calculate() << "%" << endl;}
};
int main() {
    int rollNo;
    string name;
    int marks[6];
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter marks separated by space: ";
    for (int i = 0; i < 6; i++) {
        cin >> marks[i];}
    Result result(rollNo, name, marks);
    result.display_result();
    return 0;
}
