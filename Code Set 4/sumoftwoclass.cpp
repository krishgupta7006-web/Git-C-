#include <iostream>
using namespace std;

class B;

class A
{
private:
    int num1;

public:
    A()
    {
        num1 = 10;
    }

    friend int sum(A, B);
};

class B
{
private:
    int num2;

public:
    B()
    {
        num2 = 20;
    }

    friend int sum(A, B);
};


int sum(A obj1, B obj2)
{
    return obj1.num1 + obj2.num2;
}

int main()
{
    A a;
    B b;

    cout << "Sum = " << sum(a, b);

    return 0;
}