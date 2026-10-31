#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("students.txt");

    int rollno;
    string name;
    float marks;
    char choice;

    do
    {
        cout<<"Enter Roll Number: ";
        cin>>rollno;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Marks: ";
        cin>>marks;

        file<<rollno<<" "<<name<<" "<<marks<<endl;

        cout<<"Add another student? (y/n): ";
        cin>>choice;

    }while(choice=='y' || choice=='Y');

    file.close();

    cout<<"Student records saved successfully.";

    return 0;
}