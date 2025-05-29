#include<iostream>
using namespace std;
class car
{
    public:
           string brand;
           string brand2;
           void start()
           {
            cout<< brand <<" car started "<<endl;
           }
           void stop()
           {
            cout<< brand2 <<" car stopped "<<endl;
           }
};
int main()
{
    car c1,c2;
    c1.brand="charizard";
    c1.start();
    c2.brand2="blastoise";
    c2.stop();
    return 0;
}
