#include <iostream>
using namespace std;
class Tollbooth
{
    static int total_number_of_cars;
    static int total_amount;
    public:
    static void payingCar();
    static void notpayingCar();
    static void display();
};
int Tollbooth::total_number_of_cars = 0;
int Tollbooth::total_amount = 0;
void Tollbooth::payingCar()
{
    total_number_of_cars++;
    total_amount += 70;
}
void Tollbooth::notpayingCar()
{
    total_number_of_cars++;
}
void Tollbooth::display()
{
    cout << "Total number of cars: " << total_number_of_cars << endl;
    cout << "Total amount: " << total_amount << endl;
}
int main()
{
     int choice;
    do{
        cout<<"Enter 1 for paying car"<<endl;
        cout<<"Enter 2 for not paying car"<<endl;
        cout<<"Enter 3 for display"<<endl;
        cout<<"Enter 4 for exit"<<endl;
        cin>>choice;
        if(choice == 1)
        Tollbooth::payingCar();
        else if(choice == 2)
        Tollbooth::notpayingCar();
        else if(choice == 3)
        Tollbooth::display();
    }while(choice!=4);
}