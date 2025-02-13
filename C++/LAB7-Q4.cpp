#include <iostream>
#include <string>
using namespace std;

class staff
{
  int code;
  string name;

  public:
  void getdata()
  {
    cout << "Enter code: ";
    cin >> code;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
  }

  void putdata()
  {
    cout << "Code: " << code << endl;
    cout << "Name: " << name << endl;
  }
  
};

class teacher:public staff
{
  string subject;
  string publication;

  public:
  void getdata()
  {
    staff::getdata();
    cout << "Enter subject: ";
    getline(cin, subject);
    cout << "Enter publication: ";
    getline(cin, publication);
  }

  void putdata()
  {
    staff::putdata();
    cout << "Subject: " << subject << endl;
    cout << "Publication: " << publication << endl;
  }
};

class officer:public staff
{
  string grade;

  public:
  void getdata()
  {
    staff::getdata();
    cout << "Enter grade: ";
    getline(cin, grade);
  }

  void putdata()
  {
    staff::putdata();
    cout << "Grade: " << grade << endl;
  }
};

class typist:public staff
{
  int speed;

  public:
  void getdata()
  {
    staff::getdata();
    cout << "Enter speed: ";
    cin >> speed;
  }

  void putdata()
  {
    staff::putdata();
    cout << "Speed: " << speed << endl;
  }
};

class regular:public typist
{

};  

class casual:public typist
{
  int daily_wages;

  public:
  void getdata()
  {
    typist::getdata();
    cout << "Enter daily wages: ";
    cin >> daily_wages;
  }

  void putdata()
  {
    typist::putdata();
    cout << "Daily wages: " << daily_wages << endl;
  }
};

int main() {
  teacher t;
  officer o;
  regular r;
  casual c;

  cout << "Enter teacher details:" << endl;
  t.getdata();
  cout << "Enter officer details:" << endl;
  o.getdata();
  cout << "Enter regular typist details:" << endl;
  r.getdata();
  cout << "Enter casual typist details:" << endl;
  c.getdata();

  cout << "Teacher details:" << endl;
  t.putdata();
  cout << "Officer details:" << endl;
  o.putdata();
  cout << "Regular typist details:" << endl;
  r.putdata();
  cout << "Casual typist details:" << endl;
  c.putdata();

  return 0;  
}
