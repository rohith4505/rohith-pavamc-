#include <iostream>
using namespace std;

class Sample
{
    int *data;
    public:
        Sample()
        {
            data = new int;
            *data = 10;
            cout << "Constructor.. Modified" << *data;
        }
        ~Sample()
        {
            delete data;
            cout << "Destructor... Deleted.";
        }

};

int main()
{
    Sample s1;


    return 0;
}