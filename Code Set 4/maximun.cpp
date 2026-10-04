#include <iostream>
using namespace std;

class maximum
{
public:

    
    void maxi(int a, int b)
    {
        if (a > b)
            cout << "Maximum of two numbers: " << a << endl;
        else
            cout << "Maximum of two numbers: " << b << endl;
    }

    void maxi(int a, int b, int c)
    {
        if (a >= b && a >= c)
            cout << "Maximum of three numbers: " << a << endl;
        else if (b >= a && b >= c)
            cout << "Maximum of three numbers: " << b << endl;
        else
            cout << "Maximum of three numbers: " << c << endl;
    }

    void maxi(float a, float b)
    {
        if (a > b)
            cout << "Maximum of two floating numbers: " << a << endl;
        else
            cout << "Maximum of two floating numbers: " << b << endl;
    }
};

int main()
{
    maximum m1;

    m1.maxi(2, 4);
    m1.maxi(4, 2, 5);
    m1.maxi(3.2f, 5.2f);

    return 0;
}