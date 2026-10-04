#include<iostream>
using namespace std;

class Interest
{
public:
    float P;
    float R;
    float T;

    void input()
    {
        cout << "Enter Principal: ";
        cin >> P;

        cout << "Enter Rate: ";
        cin >> R;

        cout << "Enter Time: ";
        cin >> T;
    }

    inline float calculateSI()
    {
        return (P * R * T) / 100;
    }
};

int main()
{
    Interest i;

    i.input();

    cout << "Simple Interest = " << i.calculateSI();

    return 0;
}