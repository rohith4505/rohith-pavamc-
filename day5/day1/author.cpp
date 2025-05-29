#include<iostream>
using namespace std;
class book
{
public:
    string title;
    string author;

    void display()
    {
        cout<<" title "<<title<<" author "<<author << endl;
    }

};
int main()
{
    book j;
    j.title = " pokemon ";
    j.author = " musa ";
    j.display();
    return 0;
}