#include <iostream>
using namespace std;

class Area
{
public:

    
    void calculate(int side)
    {
        cout << "Area of Square = " << side * side << endl;
    }

   
    void calculate(int length, int width)
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }

    
    void calculate(double radius)
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Area a1;

    a1.calculate(5);    
    a1.calculate(4, 6);     
    a1.calculate(3.5);     

    return 0;
}