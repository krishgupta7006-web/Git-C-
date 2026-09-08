#include<iostream>
#include<string>
using namespace std;
class Student
{
    
    string name;
    int rollno;

    public:
    void setdata(string s, int r){
         name= s;
         rollno= r;



    }
    void displaydata(){
        cout<<"The details of student are:"<<endl;
        cout<<"Student Name:"<<name<<endl;
        cout<<"Enter a Student Roll No:"<<rollno<<endl;
    }


};
int main(){
    Student k;
    k.setdata("Krish", 3);
    k.displaydata();
    return 0;
}