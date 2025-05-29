#include<iostream>
using namespace std;
class student
{
    private:
    int rnum;
    public:
    void setrnum(int r)
    {
        rnum=r;
    }
    int getrnum()
    {
        return rnum;
    }
};
int main()
{
    student s;
    s.setrnum(101);
    cout<<s.getrnum()<<endl;
    return 0;
}