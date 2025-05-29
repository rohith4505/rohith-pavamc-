#include <iostream>
using namespace std;

class Veh
{
    public:
        void st()
        {
            cout << "Vehicle Has Started."<< endl;
        }
};

class Car : public Veh
{
    public:
        void dri()
        {
            cout << "You Are Driving Car.."<< endl;
        }
};



int main()
{
    Car s;
    s.st();
    s.dri();


    return 0;
}