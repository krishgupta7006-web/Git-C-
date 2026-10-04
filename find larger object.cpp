#include <iostream>
using namespace std;

class Student
{
    int rollno;
    int marks;

public:

    void setdata(int r, int m)
    {
        rollno = r;
        marks = m;
    }

    int getrollno()
    {
        return rollno;
    }

    int getmarks()
    {
        return marks;
    }
};

Student findTop(Student s1, Student s2)
{
    if (s1.getmarks() > s2.getmarks())
    {
        return s1;
    }
    else
    {
        return s2;
    }
}

int main()
{
    Student s1, s2, top;

    int r1, m1, r2, m2;

    cout << "Enter roll no and marks of first student: ";
    cin >> r1 >> m1;

    cout << "Enter roll no and marks of second student: ";
    cin >> r2 >> m2;

    s1.setdata(r1, m1);
    s2.setdata(r2, m2);

    top = findTop(s1, s2);

    cout << "Top Student Roll No = " << top.getrollno() << endl;
    cout << "Top Student Marks = " << top.getmarks();

    return 0;
}