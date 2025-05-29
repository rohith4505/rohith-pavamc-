#include<iostream>
using namespace std;
void disinv(int *inv,int size)
{
    cout<<"warehouse inventory items";
    for(int i=0;i<size;i++)
    {
        cout<<*(inv + i)<<"";
    }
    cout<<endl;
}

int main()
{
    int inv[5] = {50, 20, 30, 40, 10};
    int *ptr = inv;
    disinv(ptr , 5);
    *(ptr + 2 )=25;
    cout<<"updated inventory"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<inv[i]<<"";
    }
    cout<<endl;
    return 0;

}
