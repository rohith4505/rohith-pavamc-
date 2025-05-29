#include<iostream>
#include<string>
using namespace std;
class veh
{
    private:
    string model;
    int year;
    public:
    veh(string m,int n)
    {
        model=m;
        year=n;
    }
    void show()
    {
        cout<< " model "<< model <<" year "<< year <<endl;
    }
};
int main()
{
    veh *v1= new veh("toyata",2024);
    veh *v2= new veh("car",2025);
    v1->show();
    v2->show();
    delete v1;
    delete v2;
    return 0;
}