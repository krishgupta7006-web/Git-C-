#include<iostream>
using namespace std;

class Number
{
private:
    int a;
    int b;

public:
    void input()
    {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;
    }

    friend void largest(Number n);
};

void largest(Number n)
{
    if(n.a > n.b)
    {
        cout << "Larger number = " << n.a;
    }
    else
    {
        cout << "Larger number = " << n.b;
    }
}

int main()
{
    Number n;

    n.input();

    largest(n);

    return 0;
}