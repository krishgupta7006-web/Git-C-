#include<iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;

    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    
    Complex add(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

   
    Complex multiply(Complex c)
    {
        Complex temp;

        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};


Complex subtract(Complex a, Complex b)
{
    Complex temp;

    temp.real = a.real - b.real;
    temp.imag = a.imag - b.imag;

    return temp;
}

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number\n";
    c1.input();

    cout << "\nEnter second complex number\n";
    c2.input();

  
    result = c1.add(c2);

    cout << "\nAddition = ";
    result.display();

    result = subtract(c1, c2);

    cout << "\nSubtraction = ";
    result.display();

   
    result = c1.multiply(c2);

    cout << "\nMultiplication = ";
    result.display();

    return 0;
}