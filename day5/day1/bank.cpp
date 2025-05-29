#include<iostream>
using namespace std;
class balanced
{
    private:
    int pin=4505;
    double balance=5000;
    bool vpin(int epin)
    {
        return epin==pin;
    }
    public:
    void withdrawcash(int epin, double amount)
    {
        if(vpin(epin))
           if(amount<=balance)
        {
            balance-=amount;
            cout<<"withdrawl succesfull:remaining balance"<<balance<<endl;

        }
        else
        {
            cout<<"insuffient balance"<<endl;

        }
        
    else
    {
        cout<<"invalid pin"<<endl;
    }
    
}
void checkbal( int epin)
{
    if(vpin(epin))
    {
        cout<<"your balance is "<<balance <<endl;
    }
    else
    {
        cout<<"invalid pin"<<endl;
    }
}
};
int main()
{
    balanced b;
    b.withdrawcash(4505,1000);
    b.checkbal(4505);
    b.withdrawcash(5254,5000);
    return 0;
}