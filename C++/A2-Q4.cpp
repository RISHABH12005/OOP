#include <iostream>
#include <random>
using namespace std;
int flip(mt19937 &rng) {
    uniform_int_distribution<int> dist(0, 1);
    return dist(rng);
}
int main() {
    random_device rd;
    mt19937 rng(rd());
    int headsCount = 0;
    int tailsCount = 0;
    for (int i = 0; i < 100; ++i) {
        int result = flip(rng);
        if (result == 0) {
            cout << "Tails" <<endl;
            tailsCount++;
        } else {
            cout << "Heads" <<endl;
            headsCount++;
        }
    }
    cout << "No. of Heads: " << headsCount <<endl;
    cout << "No. of Tails: " << tailsCount <<endl;
    return 0;
}