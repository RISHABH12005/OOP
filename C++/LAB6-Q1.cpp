#include <iostream>
using namespace std;

class Distance
{
  double feet,inches;
  public:
      Distance():feet(0),inches(0){};
      Distance(double feet,double inches)
      {
          if(inches>12.0)
           { cout<<"inches part should be less than 12.0"<<endl;
          exit(1);
           }
           this -> feet = feet;
           this -> inches = inches;

      };

      void display() const;

      Distance operator -(Distance &dis2);
      Distance  operator +(Distance &dis2);
      void operator +=(Distance &dis2);
      void  operator -=(Distance &dis2);
     int  operator >(Distance &dis2);
     int  operator <(Distance &dis2);
};

Distance Distance::operator - (Distance &dis2)
{
    Distance result;
    result.feet = feet - dis2.feet;
    result.inches = inches - dis2.inches;

    return result;
}
Distance Distance::operator + (Distance &dis2)
{
    Distance result;
    result.inches = inches + dis2.inches;
    result.feet = feet + dis2.feet + result.inches/12;
  


    return result;
}

void Distance::operator += (Distance &dis2)
{
     feet += dis2.feet;
    inches +=dis2.inches;
}
void Distance::operator -= (Distance &dis2)
{

    feet -= dis2.feet;
    inches -=dis2.inches;

}

int Distance::operator > (Distance &dis2)
{
    if(feet>=dis2.feet && inches>dis2.inches)
        return 1;
    else
        return 0;

}

int Distance::operator < (Distance &dis2)
{
     if(feet<=dis2.feet && inches<dis2.inches)
        return 1;
    else
        return 0;
}

void Distance::display() const
{
    cout<<feet<<" feet"<<" "<<inches<<" inches"<<endl;

}
int main()
{

    Distance dis1(12,2.6);
    Distance dis2(1.5,2.7);
    dis1.display();
    dis2.display();
     if(dis1>dis2)
    cout<<"True"<<endl;
    else
        cout<<"NO"<<endl;
    if(dis1<dis2)
        cout<<"Yes"<<endl;
    else
    cout<<"NO"<<endl;
    Distance res = dis1 - dis2;
    Distance res1 = dis1 + dis2;
    dis1 += dis2;
    res.display();
    res1.display();
    dis1.display();
    dis2.display();



}
