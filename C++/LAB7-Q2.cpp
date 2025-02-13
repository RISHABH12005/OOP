#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string schoolName;
    string highestDegree;

public:
    void setInfo(string school, string degree) {
        schoolName = school;
        highestDegree = degree;
    }

    void displayInfo() {
        cout << "School/University: " << schoolName << endl;
        cout << "Highest Degree: " << highestDegree << endl;
    }
};

class Employee {
protected:
    string name;
    int empNumber;

public:
    void setData(string empName, int empNum) {
        name = empName;
        empNumber = empNum;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << empNumber << endl;
    }
};

class Manager : public Employee, public Student {
private:
    string title;
    float dues;

public:
    void setManagerInfo(string empName, int empNum, string school, string degree, string empTitle, float empDues) {
        setData(empName, empNum);
        setInfo(school, degree);
        title = empTitle;
        dues = empDues;
    }

    void displayManagerInfo() {
        displayData();
        displayInfo();
        cout << "Title: " << title << endl;
        cout << "Dues: $" << dues << endl;
    }
};

class Scientist : public Employee, public Student {
private:
    int numPublications;

public:
    void setScientistInfo(string empName, int empNum, string school, string degree, int publications) {
        setData(empName, empNum);
        setInfo(school, degree);
        numPublications = publications;
    }

    void displayScientistInfo() {
        displayData();
        displayInfo();
        cout << "Publications: " << numPublications << endl;
    }
};

class Laborer : public Employee {

};

int main() {
    Manager manager;
    manager.setManagerInfo("Avinash Sharma", 1001, "University of XYZ", "PhD", "Senior Manager", 2000.0);
    manager.displayManagerInfo();

    cout << endl;

    Scientist scientist;
    scientist.setScientistInfo("Avinash Sharma", 2002, "ABC College", "Master's", 15);
    scientist.displayScientistInfo();

    cout << endl;

    Laborer laborer;
    laborer.setData("Aviraj", 3003);
    laborer.displayData();

    return 0;
}
