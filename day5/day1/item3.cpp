#include <iostream>
using namespace std;
class Product {

private:

    int quantity;            

public:

    float pricePerItem;   


    void setProduct(int q, float price) {

        if (q > 0 && price > 0) {
            quantity = q;

            pricePerItem = price;

        } else {

            cout << "Invalid quantity or price!" << endl;

        }

    }

    float getTotalPrice() {

        return quantity * pricePerItem;

    }

   

    int getQuantity() {

        return quantity;

    }

};

int main() {

    Product p;

    int qty;

    float price;

    cout << "Enter quantity: ";

    cin >> qty;

    cout << "Enter price per item: ";

    cin >> price;

    

    p.setProduct(qty, price);

    cout << "\nQuantity: " << p.getQuantity() << endl;

    cout << "Price per Item: " << p.pricePerItem << endl;

    cout << "Total Price: " << p.getTotalPrice() << endl;

    return 0;

}
