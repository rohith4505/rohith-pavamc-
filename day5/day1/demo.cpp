#include<iostream>
using namespace std;
class demo
{
    public:
        void show();
};
void demo::show()
{
    cout<<"hello fom demo class"<<endl;
}
int main()
{
    demo d;
    d.show();
    return 0;
}