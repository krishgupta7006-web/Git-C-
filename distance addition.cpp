#include<iostream>
using namespace std;

class Distance
{
public:
    int feet;
    int inches;

    void input()
    {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inches;
    }

    Distance add(Distance d)
    {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if(temp.inches >= 12)
        {
            temp.feet = temp.feet + 1;
            temp.inches = temp.inches - 12;
        }

        return temp;
    }

    void display()
    {
        cout << feet << " ft " << inches << " in";
    }
};

int main()
{
    Distance d1, d2, d3;

    d1.input();
    d2.input();

    d3 = d1.add(d2);

    cout << "Total Distance = ";
    d3.display();

    return 0;
}