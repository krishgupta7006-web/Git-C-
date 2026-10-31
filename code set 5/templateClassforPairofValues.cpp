#include <iostream>
using namespace std;

template <class A>
class Pair
{
private:
    A first;
    A second;

public:
    Pair(A a, A b)
    {
        first = a;
        second = b;
    }

    A maximum()
    {
        if (first > second)
            return first;
        else
            return second;
    }

    A minimum()
    {
        if (first < second)
            return first;
        else
            return second;
    }

    void display()
    {
        cout << "First Value: " << first << endl;
        cout << "Second Value: " << second << endl;
        cout << "Maximum: " << maximum() << endl;
        cout << "Minimum: " << minimum() << endl;
    }
};

int main()
{

    Pair<int> p1(10, 25);

    cout << "Integer Pair" << endl;
    p1.display();

    Pair<float> p2(5.5, 2.3);

    cout << "Float Pair" << endl;
    p2.display();

    return 0;
}