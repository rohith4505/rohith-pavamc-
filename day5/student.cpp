#include <iostream>
using namespace std;

class Stud
{
    public:
    string name;
    int mrks;
    Stud()
    {
        mrks = 98;
        name = "Tony";
    }
    Stud(const Stud &c)
    {
        mrks = c.mrks;
        name = c.name;

    }
    void dis()
    {
        cout << "Name : " << name << endl << "Marks : " << mrks <<endl;

    }

};

int main()
{
    Stud s1;
    Stud s2 = s1;
    s2.dis();


    return 0;
}

