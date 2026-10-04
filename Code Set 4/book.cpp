#include<iostream>
using namespace std;

class Book
{
private:
    int id;
    string name;
    float price;

    static int totalBooks;

public:

    void input()
    {
        cout << "Enter Book ID: ";
        cin >> id;

        cout << "Enter Book Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        totalBooks++;
    }


    inline float discountPrice()
    {
        return price - (price * 10 / 100);
    }

    bool operator>(Book b)
    {
        if(price > b.price)
            return true;
        else
            return false;
    }

    friend void costlierBook(Book a, Book b);

    static void displayTotalBooks()
    {
        cout << "\nTotal Books = " << totalBooks;
    }
};

int Book::totalBooks = 0;


void costlierBook(Book a, Book b)
{
    if(a > b)
    {
        cout << "\nCostlier Book:";
        cout << "\nID: " << a.id;
        cout << "\nName: " << a.name;
        cout << "\nPrice: " << a.price;

        cout << "\nDiscounted Price = " << a.discountPrice();
    }
    else
    {
        cout << "\nCostlier Book:";
        cout << "\nID: " << b.id;
        cout << "\nName: " << b.name;
        cout << "\nPrice: " << b.price;

        cout << "\nDiscounted Price = " << b.discountPrice();
    }
}

int main()
{
    Book b1, b2;

    cout << "Enter Book 1 Details\n";
    b1.input();

    cout << "\nEnter Book 2 Details\n";
    b2.input();

    costlierBook(b1, b2);

    Book::displayTotalBooks();

    return 0;
}