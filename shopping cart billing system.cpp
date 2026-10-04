#include<iostream>
using namespace std;

class Product
{
public:
    string name;
    float price;
    int quantity;

    void input()
    {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    Product combine(Product p)
    {
        Product temp;

        temp.name = name;
        temp.price = price;
        temp.quantity = quantity + p.quantity;

        return temp;
    }

    void display()
    {
        cout << "\nName = " << name;
        cout << "\nPrice = " << price;
        cout << "\nQuantity = " << quantity;
        cout << "\nTotal Value = " << price * quantity;
    }
};

Product higherValue(Product a, Product b)
{
    if(a.price * a.quantity > b.price * b.quantity)
        return a;
    else
        return b;
}

int main()
{
    Product p1, p2, result;

    p1.input();
    p2.input();

    result = higherValue(p1, p2);

    cout << "\nProduct with Higher Total Value";
    result.display();

    result = p1.combine(p2);

    cout << "\n\nCombined Inventory";
    result.display();

    return 0;
}