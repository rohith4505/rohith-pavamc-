#include <iostream>
using namespace std;

class Vehicle
{
    public:
        void St()
        {
            cout <<endl<< "Vehicle Is Started."<<endl; 
        }
};

class Car : public Vehicle
{
    public:
    void Cr()
    {
        cout << "You Are Driving A Car."<<endl;
    }
};

class Petrol : public Car
{
    public:
        void ptr()
        {
            cout << "Which Is Petrol Engine Type."<<endl;
        }
};

class Diesel : public Car
{
    public:
        void dsl()
        {
            cout << "Which Is Diesel Engine Type."<<endl;
        }
};

class Bike : public Vehicle
{
    public:
    void bk()
    {
        cout << "You Are Riding A Bike."<<endl;
    }
};

class ev : public Bike
{
    public:
        void e()
        {
            cout << "Electrical Bike."<<endl;
        }
};

int main()
{
    Petrol p;
    p.St();
    p.Cr();
    p.ptr();

    Diesel d;
    d.St();
    d.Cr();
    d.dsl();

    ev e;
    e.St();
    e.bk();
    e.e();
    
    return 0;
}