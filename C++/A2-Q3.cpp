#include <iostream>
using namespace std;
long hms_to_secs(int hours, int minutes, int seconds) {
    return static_cast<long>(hours) * 3600 + static_cast<long>(minutes) * 60 + seconds;
}
void input(int &hours, int &minutes, int &seconds) {
    cout << "Enter time in the format HH:MM:SS enter '0' to exit: ";
    char colon1, colon2;
    cin >> hours >> colon1 >> minutes >> colon2 >> seconds;
}
void display(long totalSeconds) {
    cout << "Equivalent time in seconds: " << totalSeconds << "seconds" <<endl;
}
int main() {
    int hours, minutes, seconds;
    while (true) {
        input(hours, minutes, seconds);
        if (hours == 0 && minutes == 0 && seconds == 0) {
            break;
        }
        long totalSeconds = hms_to_secs(hours, minutes, seconds);
        display(totalSeconds);
    }
    return 0;
}