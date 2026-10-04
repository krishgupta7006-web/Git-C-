#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    void setvalue(int v)
    {
        value = v;
    }

    int getvalue()
    {
        return value;
    }
};


Number add(Number a, Number b)
{
    Number c;

    c.setvalue(a.getvalue() + b.getvalue());

    return c;
}

int main()
{
    Number n1, n2, result;
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    n1.setvalue(x);
    n2.setvalue(y);

    result = add(n1, n2);

    cout << "Sum = " << result.getvalue();

    return 0;
}