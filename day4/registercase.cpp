#include<iostream>
#include<string>
using namespace std;
class fir
{
    public:
    string cname;
    fir(string name) : cname(name){}
    virtual void rcase() = 0;
    virtual ~fir() {}
};
class theftcase : public fir
{
    public:
    theftcase(string name) : fir(name){}
    void rcase() override
    {
        cout<<"theft fir register for "<<cname<<"."<<endl;
        cout<<"Action  : investigation starts "<<endl;
    }
};
class acase : public fir
{
    public:
    acase(string name) : fir(name){}
    void rcase() override
    {
        cout<<"accident"<<cname<<endl;
        cout<<"collecting details about people involved "<<endl;
    }
};
class mcase : public fir
{
    public:
    mcase(string name) : fir(name){}
    void rcase() override
    {
        cout<<"missing person registered"<<cname<<"."<<endl;
        cout<<"action : local patrol units declared"<<endl;
    }
};
int main()
{
    fir *c1= new theftcase("blaziken");
    fir *c2 = new acase("sita");
    fir *c3 = new mcase("karnan");
    cout<<" fir registration  "<<endl;
    c1->rcase();
    cout<<endl;
    c2->rcase();
    cout<<endl;
    c3->rcase();
    cout<<endl;
    delete c1;
    delete c2;
    delete c3;
    return 0;
}

