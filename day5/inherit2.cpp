#include <iostream>
using namespace std;

class User
{
    public:
        string name;
        string pos;
        void us(string n, string p)
        {
            name = n;
            pos = p;
        }
};

class admin : public User
{
    public:
        void adm()
        {
            cout <<"Administrator Is Logging"<<endl<< "Welcome Mr.  "<<name<<endl;
        }
};



class costm : public User
{
    public:
        void cst()
        {
            cout <<endl<<endl <<"Good Morning "<<name<<endl<<"What Would You Like To Buy Today..."<< endl;
        }
};


class selr : public User
{
    public:
        int id;
        void sel(int i)
        {
            cout <<endl<<endl<<"Seller "<<name<<endl<< "Please Enter Your Id:"<< i<< endl;
        }
};

int main()
{
    admin a;
    a.us("Sam", "admin");
    a.adm();
    costm c;
    c.us("Rahul", "costomer");
    c.cst();

    selr s;
    s.us("Habeeb", "Seller");
    s.sel(24);



    return 0;
}
