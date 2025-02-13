#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("employee_data.txt"); 

    if (!outFile.is_open()) {
        cout << "Error opening file for writing." << endl;
        return 1; 
    }

    string firstName, lastName;
    char middleInitial;
    unsigned long employeeNumber;
    char response;

    do {
        cout << "Enter first name: ";
        cin >> firstName;

        cout << "Enter middle initial: ";
        cin >> middleInitial;

        cout << "Enter last name: ";
        cin >> lastName;

        cout << "Enter employee number: ";
        cin >> employeeNumber;

        
        outFile << firstName << " "
                << middleInitial << " "
                << lastName << " "
                << employeeNumber << endl;

        cout << "Do you want to enter another employee (Y/N)? ";
        cin >> response;
    } while (response == 'Y' || response == 'y');

    outFile.close(); 

    ifstream inFile("employee_data.txt"); 

    if (!inFile.is_open()) {
        cout << "Error opening file for reading." << endl;
        return 1; 
    }

    string readFirstName, readLastName;
    char readMiddleInitial;
    unsigned long readEmployeeNumber;

    cout << "\nEmployee Data from File:\n";

    while (inFile >> readFirstName >> readMiddleInitial >> readLastName >> readEmployeeNumber) {
        cout << "First Name: " << readFirstName << endl;
        cout << "Middle Initial: " << readMiddleInitial << endl;
        cout << "Last Name: " << readLastName << endl;
        cout << "Employee Number: " << readEmployeeNumber << endl << endl;
    }

    inFile.close();
    return 0; 
}
