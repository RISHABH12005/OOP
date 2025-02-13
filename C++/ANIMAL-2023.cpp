#include <iostream>
#include <string>
using namespace std;
class Animal {
private:
    string species;
    int numLegs;
public:
    Animal(const string& sp, int legs) : species(sp), numLegs(legs) {}
    string getSpecies() const {
        return species;
    }
    int getNumLegs() const {
        return numLegs;
    }
};
class Bird : public Animal {
private:
    char canFly;
public:
    Bird(const string& sp, int legs, char fly) : Animal(sp, legs), canFly(fly) {}
    char getCanFly() const {
        return canFly;
    }
};
int main() {
    string species;
    int legs;
    char canFly;
    cout << "Enter the species of the bird: ";
    getline(cin, species);
    cout << "Enter the number of legs of the bird: ";
    cin >> legs;
    cout << "Can the bird fly? (Y/N): ";
    cin >> canFly;
    Bird bird(species, legs, canFly);
    cout << "\nInformation about the bird:\n";
    cout << "Species: " << bird.getSpecies() << std::endl;
    cout << "Number of legs: " << bird.getNumLegs() << std::endl;
    cout << "Can fly? " << (bird.getCanFly() == 'Y' ? "Yes" : "No") << std::endl;
    return 0;
}
