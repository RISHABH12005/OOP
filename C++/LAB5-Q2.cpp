#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    int accountNo;
    string accountHolderName;
    double balance;
public:
    // Constructors
    BankAccount() : accountNo(0), accountHolderName(""), balance(0.0) {}
    BankAccount(int accN, string accHolderName) : accountNo(accN), accountHolderName(accHolderName), balance(0.0) {}
    BankAccount(int accN, string accHolderName, double bal) : accountNo(accN), accountHolderName(accHolderName), balance(bal) {}
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }
    void withdraw(double amount) {
        if (balance - amount >= 0) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;}
    }
    void display() {
        cout << "Account Number: " << accountNo << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;}
};
int main() {
    BankAccount acc1;
    BankAccount acc2(2848904, "Ram");
    BankAccount acc3(3439546, "Naman", 9000.0);
    cout << "Initial Details:" << endl;
    acc1.display();
    cout << endl;
    acc2.display();
    cout << endl;
    acc3.display();
    cout << endl;
    acc1.deposit(7000);
    acc1.withdraw(900);
    acc1.display();
    cout << endl;
    acc2.deposit(4000);
    acc2.withdraw(2000);
    acc2.display();
    cout << endl;
    acc3.withdraw(8000);
    acc3.display();
    cout << endl;
    return 0;
}