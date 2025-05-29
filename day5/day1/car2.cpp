#include<iostream>
using namespace std;
class car
{
    string mode1;
    int year;
    public:
    car()
    {
        mode1="unknown";
        year=0;

    }
    car(string m)
    {
        mode1=m;
        year=0;
    }
    car(string m,int y)
    {
        mode1=m;
        year=y;
    }
    void display()
    {
        cout<<" mode1 "<< mode1 <<" year "<< year << endl ;
            }
};
int main()
{
    car c1;
    car c2("toyata");
    car c3("honda",2020);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
