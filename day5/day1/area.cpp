#include<iostream>
using namespace std;
class box
{
    public:
    int length;
    box()
    {
        length=0;
    }
    box(int l)
    {
        length=l;
    
    }
    void display()
    {
        cout<<"length"<<length<<endl;
    }
    
} ;// namespace std;
int main()
{
    box b;
    box b1(20);
    b.display();
    b1.display();
    return 0;
}
