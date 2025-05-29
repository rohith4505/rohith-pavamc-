#include<iostream>
using namespace std;
class bank
{
private:
    int bal;
public:
    void setbal(int b)
    {
        bal = b;
    }
    int getbal()
    {
        return bal;
    }
};
int main()
{
    bank a;
    a.setbal(1000);
    cout<<"balance:"<<a.getbal()<<endl;
    return 0;
}
