#include<iostream>
using namespace std;

class Book
{
public:
    int id;
    string title;
    int copies;

    void input()
    {
        cout << "Enter book ID: ";
        cin >> id;

        cout << "Enter title: ";
        cin >> title;

        cout << "Enter copies: ";
        cin >> copies;
    }

    void exchange(Book &other)
    {
        int temp;

        temp = id;
        id = other.id;
        other.id = temp;

        string t;

        t = title;
        title = other.title;
        other.title = t;

        temp = copies;
        copies = other.copies;
        other.copies = temp;
    }

    void display()
    {
        cout << "\nID = " << id;
        cout << "\nTitle = " << title;
        cout << "\nCopies = " << copies;
    }
};

Book moreCopies(Book a, Book b)
{
    if(a.copies > b.copies)
        return a;
    else
        return b;
}

int main()
{
    Book b1, b2, result;

    b1.input();
    b2.input();

    cout << "\nBefore Exchange";
    b1.display();
    b2.display();

    b1.exchange(b2);

    cout << "\n\nAfter Exchange";
    b1.display();
    b2.display();

    result = moreCopies(b1, b2);

    cout << "\n\nBook with More Copies";
    result.display();

    return 0;
}