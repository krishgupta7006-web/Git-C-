#include <iostream>
using namespace std;

class Student
{
public:
    static int count;

    Student()
    {
        count++;
    }

    void display()
    {
        cout << "Total number of student objects: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    s3.display();

    return 0;
}