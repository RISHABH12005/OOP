#include <iostream>
using namespace std;

class rational{
    int numerator,denominator;
public:
    void input();
    void display() const;
    rational operator +(rational& num );
    rational operator -(rational& num );
    rational operator *(rational& num );
    rational operator /(rational& num );

};
void rational::input()
{
    cout<<"Enter numerator and denominator: ";
    cin>>numerator>>denominator;
    if(denominator==0)
    {
        cout<<"Invalid Input"<<endl;
        exit(1);
    }
}

void rational::display() const
{
    cout<<numerator<<"/"<<denominator<<endl;
}
rational rational :: operator -(rational& num)
{
   rational result;
   result.numerator = (numerator*num.denominator - num.numerator*denominator);
   result.denominator =  denominator*num.denominator;


    return result;

}

rational rational :: operator +(rational& num)
{
    rational result;
   result.numerator = (numerator*num.denominator + num.numerator*denominator);
   result.denominator =  denominator*num.denominator;


    return result;

}

rational rational :: operator *(rational& num)
{
     rational result;
    result.numerator = numerator * num.numerator;
    result.denominator = denominator * num.denominator;

    return result;

}

rational rational :: operator /(rational& num)
{
    rational result;
    result.numerator = numerator * num.denominator;
    result.denominator = denominator * num.numerator;

    return result;

}
int main()
{
    rational num1,num2;
    num1.input();
    num2.input();
    num1.display();
    num2.display();
    rational res1 = num1 + num2;
    cout<<"Addition: ";
    res1.display();
    rational res2 = num1 - num2;
    cout<<"Subtraction: ";
    res1.display();
    res1 = num1 * num2;
    cout<<"Multiplication: ";
    res1.display();
     res1 = num1 / num2;
    cout<<"Division: ";
    res1.display();


}
