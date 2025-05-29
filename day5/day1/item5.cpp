#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Item
{
    private:
        int quant;
        string name;
        float pr;

    public:
        Item (string n = "", int q = 0, float p = 0.0f) : name(n), quant(q), pr(p){}

        Item operator+ (const Item &ot)
        {
            return Item(name + " & "+ ot.name, quant + ot.quant, pr + ot.pr);
        }

        bool operator==(const Item &ot)
        {
            return (name == ot.name && quant == ot.quant && pr == ot.pr);
        }

        friend ostream &operator<< (ostream &os, const Item &it)
        {
            os << left << setw(15) << it.name << setw(10) << it.quant << "$" << fixed << setprecision(2)<< it.pr;
            return os;
        }

        string gname() const { return name;}
        int gquant() const { return quant;}
        float gpr() const { return pr;}

};

class Invoice
{
    public:
        int quant;
        float tot;
        void inv(const Item &it)
        {
            cout << " ------- Invoice (Basic) -------"<<endl;
            cout << it<<endl;
            cout << "total : $"<< it.gpr()<< endl<<endl;

        }


        void inv(const Item &it, int qun)
        {
            cout << " ------- Invoice (Basic) -------"<<endl;
            cout << it.gname()<< " x " << quant <<endl;
            cout << "Unit Price : $ "<<it.gpr()<<endl;
            cout << "Total : $"<<tot;

        }

        void inv(const Item &it, int qun,  float d)
        {
            float st = it.gpr() * quant;
            float disamt = st * (d /100);
            float tot = st;


            cout << " ------- Invoice (Basic) -------"<<endl;
            cout << it.gname()<< " x " << quant <<endl;
            cout << "SubTotal : $ "<<st<<endl;
            cout << "Discount : "<<d<< "% {-5"<<disamt << "}"<<endl;
            cout << "Total : $"<<tot<<endl<<endl;

        }
};

int main()
{
    Item i1("Charmander",1200, 240.00), i2("Squirtle",500, 200.00), i3("Bulbasaur", 1500, 100.00);

    cout << "=== PokeDex ==="<<endl;
    cout << left << setw(35)<< "Name "<< setw(10)<<"Quantity "<< "Price "<<endl;
    cout <<i1<<endl<<i2<<endl;

    cout <<"\n === Add Item ==="<<endl;
    Item combined = i1 +i2;

    cout <<combined<<endl;

    cout <<"=== Compare Items ==="<<endl;
    if (i1 == i2)
        cout <<" Item ! ANd Item 3 Are Identical\n";
    else
        cout<<"Item 1 And Item 3 Are Diff\n";
    Invoice I;
    cout <<"\n Generate Invoice \n";
    I.inv(i1);
    I.inv(i2,3);
    I.inv(i2,3,10.0f);


    return 0;
}