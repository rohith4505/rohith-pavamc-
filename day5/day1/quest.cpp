#include <iostream>
using namespace std;

class Stud

{
    public:
        int *mrks;
        int sz;

        Stud(int s)
        {
            sz = s;
            mrks = new int[sz];

        }

        Stud(const Stud &s)
        {
            sz = s.sz;
            mrks = new int[sz];
            for (int i=0; i< sz; i++)
            {
                mrks[i] = s.mrks[i];
            }
        }
        ~Stud()
        {
            delete[] mrks;
        }
        void dis()
        {
            for (int i = 0; i<sz; i++)
            {
                cout<<mrks[i]<<" ";

            }
        }

};

int main()
{


    return 0;
}