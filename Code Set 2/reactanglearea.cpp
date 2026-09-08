#include <iostream>
#include <string>
using namespace std;
class area
{
    int Length;
    int Breath;

public:
    int area;

    void input(int a, int b)
    {

        Length = a;
        Breath = b;
    }

    void calculatearea()
    {

        area = Length * Breath;
    }
    void displayarea()
    {
        cout << "area of reactangle:" << area << endl;
    }
};
int main()
{
    area A;
    A.input(2, 4);
    A.calculatearea();
    A.displayarea();
    return 0;
}