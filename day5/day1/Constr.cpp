#include <iostream>

#include <string>

using namespace std;

class Car {

public:

    string brand;

    int speed;
    // Parameterized Constructor

    Car(string b, int s) {

        brand = b;

        speed = s;

        cout << "Parameterized Constructor Called." << endl;

    }
    void drive() {

        cout << "Driving " << brand << " at " << speed << " km/h." << endl;

    }

};

int main() {
    Car car2("Bugatti", 460); // Parameterized constructor

    car2.drive();
    return 0;

}