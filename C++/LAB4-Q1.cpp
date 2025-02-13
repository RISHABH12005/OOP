#include <iostream>
#include <string>
using namespace std;
class Stu {
private:
    string rollNo;
    int sub1;
    int sub2;
    int sub3;
    int totalMark;
public:
    friend void StuData(Stu& stu);
    friend void TotalMark(const Stu& stu);
    friend void HighMark(const Stu stu[], int Nostu);
};
void StuData(Stu& stu) {
    cout << "Enter Roll No.: ";
    cin>>stu.sub1;
    cout << "Enter Subject 2 marks: ";
    cin >> stu.sub2;
    cout << "Enter Subject 3 marks: ";
    cin >> stu.sub3;
    stu.totalMark = stu.sub1 + stu.sub2 + stu.sub3;
}
void TotalMark(const Stu& stu) {
    cout << "a) Total marks for Student "<< stu.rollNo << ": "<< stu.totalMark<< "\n";
}
void HighMark(const Stu stu[], int Nostu) {
    int highSub1Mark= -1;
    int highSub2Mark= -1;
    int highSub3Mark= -1;
    int highTotalMark = -1;
    string stuHighTotalMark;
    for (int i = 0; i < Nostu; ++i) {
        if (stu[i].sub1 > highSub1Mark) {
            highSub1Mark= stu[i].sub1;}
        if (stu[i].sub2 > highSub2Mark) {
            highSub2Mark= stu[i].sub2;}
        if (stu[i].sub3 > highSub3Mark) {
            highSub3Mark= stu[i].sub3;}
        if (stu[i].totalMark > highTotalMark) {
            highTotalMark= stu[i].totalMark;
            stuHighTotalMark= stu[i].rollNo;}
    }
    cout << "\nResults:\n";
    cout<<"b) Roll No. with highest marks in Subject 1: "<<highSub1Mark<<"\n";
    cout<<"Roll No. with highest marks in Subject 2: "<<highSub2Mark<< "\n";
    cout<<"Roll No. with highest marks in Subject 3: "<<highSub3Mark<< "\n";
    cout<<"c) Student with the highest total marks: "<<stuHighTotalMark<<", Total Marks: " << highTotalMark<< "\n";
}
int main() {
    const int Nostu= 10;
    Stu stu[Nostu];
    for (int i = 0; i < Nostu; ++i) {
        cout << "Enter details for Student " << i + 1 << ":\n";
        StuData(stu[i]);}
    for (int i = 0; i < Nostu; ++i) {
        TotalMark(stu[i]);}
    HighMark(stu, Nostu);
    return 0;}