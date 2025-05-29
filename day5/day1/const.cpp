#include <iostream>
using namespace std;

class Car
{
    string md;
    int yr;
    public:
        Car (string m, int y)
        {
            md = m;
            yr = y;
        }
        void dis();

};
void Car::dis()
{
    cout << "Model " << md << " Year " << yr <<endl;
}

int main()
{
    Car c1("Toyota", 23);
    c1.dis();

    return 0;
}