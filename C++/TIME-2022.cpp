#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
    void showdata() const
    {
        cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
    int HoursMinutesSeconds_to_Seconds() const
    {
        return (hours * 3600) + (minutes * 60) + seconds;
    }
};
int main()
{
    int h, m, s;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    cout << "Enter seconds: ";
    cin >> s;
    Time timeObj(h, m, s);
    timeObj.showdata();
    int totalSeconds = timeObj.HoursMinutesSeconds_to_Seconds();
    cout << "Equivalent time in seconds: " << totalSeconds << " seconds" << endl;
    return 0;
}