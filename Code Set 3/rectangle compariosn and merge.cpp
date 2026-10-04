#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    void input()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    bool equalArea(Rectangle r)
    {
        if(length * width == r.length * r.width)
            return true;
        else
            return false;
    }

    void display()
    {
        cout << "Length = " << length;
        cout << "\nWidth = " << width;
    }
};

Rectangle merge(Rectangle a, Rectangle b)
{
    Rectangle c;

    c.length = a.length + b.length;
    c.width = a.width + b.width;

    return c;
}

int main()
{
    Rectangle r1, r2, r3;

    r1.input();
    r2.input();

    if(r1.equalArea(r2))
        cout << "\nBoth have equal area";
    else
        cout << "\nArea is different";

    r3 = merge(r1, r2);

    cout << "\n\nMerged Rectangle\n";
    r3.display();

    return 0;
}