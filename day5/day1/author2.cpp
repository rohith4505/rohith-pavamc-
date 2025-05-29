#include <iostream>
using namespace std;

class Book
{
    public:
        string tle;
        string aut;
        float pr;
        
        Book(string t, string a, float p) : tle(t), aut(a), pr(p)
        {

        }
        void display()
        {
            cout << "Title : " << tle << endl << "Author : " << aut << endl << "Price : $ " << pr << endl;
        }

};

int main()
{
    Book b1("Harry Potter", "R K Rowling", 56.99);
    b1.display();


    return 0;
}