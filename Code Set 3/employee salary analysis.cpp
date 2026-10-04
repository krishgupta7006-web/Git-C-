#include<iostream>
using namespace std;

class Employee
{
public:
    string name;
    float salary;

    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nName = " << name;
        cout << "\nSalary = " << salary;
    }
};

Employee highestSalary(Employee e[], int n)
{
    Employee high = e[0];

    for(int i = 1; i < n; i++)
    {
        if(e[i].salary > high.salary)
        {
            high = e[i];
        }
    }

    return high;
}

Employee increment(Employee e)
{
    e.salary = e.salary + (e.salary * 10 / 100);

    return e;
}

int main()
{
    Employee e[3];
    Employee high;
    Employee revised;

    for(int i = 0; i < 3; i++)
    {
        cout << "\nEmployee " << i + 1 << "\n";
        e[i].input();
    }

    high = highestSalary(e, 3);

    cout << "\n\nEmployee with Highest Salary:";
    high.display();

    revised = increment(e[0]);

    cout << "\n\nAfter 10% Increment:";
    revised.display();

    return 0;
}