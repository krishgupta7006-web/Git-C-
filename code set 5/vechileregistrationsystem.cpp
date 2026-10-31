#include <iostream>
using namespace std;


class Vehicle
{
protected:
    string registrationNumber;
    string companyName;

public:
    
    Vehicle(string reg, string company)
    {
        registrationNumber = reg;
        companyName = company;
    }
};

class Car : public Vehicle
{
private:
    string fuelType;
    int engineCapacity;

public:
   
    Car(string reg, string company, string fuel, int engine)
        : Vehicle(reg, company)
    {
        fuelType = fuel;
        engineCapacity = engine;
    }

    void display()
    {
        cout << "Car Details" << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
        
    }
};


class Bike : public Vehicle
{
private:
    string fuelType;
    int engineCapacity;

public:
   
    Bike(string reg, string company, string fuel, int engine)
        : Vehicle(reg, company)
    {
        fuelType = fuel;
        engineCapacity = engine;
    }

    void display()
    {
        cout << "Bike Details" << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
       
    }
};

int main()
{
   
    Car car1("JK02AB1234", "Toyota", "Petrol", 1498);
    Car car2("JK02CD5678", "Honda", "Petrol", 1199);

    Bike bike1("JK02EF1111", "Royal Enfield", "Petrol", 350);
    Bike bike2("JK02GH2222", "Honda", "Petrol", 160);

    
    car1.display();
    car2.display();

    bike1.display();
    bike2.display();

    return 0;
}