#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author;
    }
};

int main() {
    Book b("ms dhoni", "sushant singh");

    b.display();

    return 0;
}