#include <iostream>

#include <string>

using namespace std;

class Car {

public:

    string brand;

    int speed;

    // Default Constructor

    Car() {

        brand = "McLaren";

        speed = 450;

        cout << "Default Constructor Called." << endl;

    }
    Car(const Car &c) {

        brand = c.brand;

        speed = c.speed;

        cout << "Copy Constructor Called." << endl;

    }

    void drive() {

        cout << "Driving " << brand << " at " << speed << " km/h." << endl;

    }

};

int main() {

    Car car1;               // Default constructor

    car1.drive();
    Car car3 = car1;         // Copy constructor

    car3.drive();

    return 0;

}