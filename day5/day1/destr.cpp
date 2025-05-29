#include <iostream>
using namespace std;

class Demo
{
    public:
        Demo()
        {
            cout << "Constructor Called.";
        }
        ~Demo()
        {
            cout << "Destructor Called.";
        }
};

int main()
{
    Demo d;
    d.~Demo();

    return 0;
}