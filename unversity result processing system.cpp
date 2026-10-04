#include <iostream>
using namespace std;

class Result
{
public:
    int roll;
    int marks[5];

    void input()
    {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks of 5 subjects:\n";

        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    int total()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }

        return sum;
    }

    Result compare(Result r)
    {
        if (total() > r.total())
            return *this;
        else
            return r;
    }

    void display()
    {
        cout << "\nRoll Number = " << roll;

        cout << "\nMarks: ";

        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << "\nTotal = " << total();
    }
};

Result topper(Result a, Result b, Result c)
{
    Result top = a;

    if (b.total() > top.total())
        top = b;

    if (c.total() > top.total())
        top = c;

    return top;
}

Result grace(Result r)
{
    int totalGrace = 0;

    for (int i = 0; i < 5; i++)
    {
        if (r.marks[i] < 40 && totalGrace < 20)
        {
            int add = 5;

            if (totalGrace + add > 20)
            {
                add = 20 - totalGrace;
            }

            r.marks[i] = r.marks[i] + add;
            totalGrace = totalGrace + add;
        }
    }

    return r;
}

int main()
{
    Result r1, r2, r3, top, newResult;

    r1.input();
    r2.input();
    r3.input();

    top = topper(r1, r2, r3);

    cout << "\nTOPPER";
    top.display();

    newResult = grace(r1);

    cout << "\n\nAfter Grace Marks";
    newResult.display();

    return 0;
}