#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int marks[5];

public:
    Student() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter 5 marks: ";
        for(int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    int total() {
        int sum = 0;

        for(int i = 0; i < 5; i++)
            sum = sum + marks[i];

        return sum;
    }

    float percentage() {
        return total() / 5.0;
    }

    char grade() {
        float p = percentage();

        if(p >= 90)
            return 'A';
        else if(p >= 75)
            return 'B';
        else if(p >= 60)
            return 'C';
        else if(p >= 40)
            return 'D';
        else
            return 'F';
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << rollNo;
        cout << "\nTotal Marks: " << total();
        cout << "\nPercentage: " << percentage() << "%";
        cout << "\nGrade: " << grade();
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}