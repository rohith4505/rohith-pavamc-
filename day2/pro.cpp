#include <iostream>
using namespace std;

class Bank
{
    protected:
        double Bal;
    
    public:
        void sbal(double b)
        {
            Bal = b;
        }
};

class Sav : public Bank
{
    public:
        void show()
        {
            cout << "Balance Is : $"<<Bal;
        }
};

int main()
{
    Sav s;
    s.sbal(246810);
    s.show();


    return 0;
}