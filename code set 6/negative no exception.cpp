#include<iostream>
#include<cmath>
using namespace std;

class NegativeNumberException
{
};

int main()
{
    float num;

    cout<<"Enter a number: ";
    cin>>num;

    try
    {
        if(num<0)
        {
            throw NegativeNumberException();
        }

        cout<<"Square Root: "<<sqrt(num);
    }
    catch(NegativeNumberException e)
    {
        cout<<"Error: Square root of a negative number cannot be calculated.";
    }

    return 0;
}