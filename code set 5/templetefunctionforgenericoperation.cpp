#include <iostream>
using namespace std;


template <class T>
T larger(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}


template <class T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
 
    int a = 10, b = 20;
    cout << "Larger Integer: " << larger(a, b) << endl;
    swapValues(a, b);
    cout << "After Swap: " << a << " " << b << endl;

    
    float x = 5.5, y = 3.2;
    cout << "\nLarger Float: " << larger(x, y) << endl;
    swapValues(x, y);
    cout << "After Swap: " << x << " " << y << endl;

    double p = 12.45, q = 15.67;
    cout << "\nLarger Double: " << larger(p, q) << endl;
    swapValues(p, q);
    cout << "After Swap: " << p << " " << q << endl;


    char c1 = 'A', c2 = 'Z';
    cout << "\nLarger Character: " << larger(c1, c2) << endl;
    swapValues(c1, c2);
    cout << "After Swap: " << c1 << " " << c2 << endl;

    return 0;
}