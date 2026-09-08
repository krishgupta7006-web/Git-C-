#include<iostream>
#include<string>
using namespace std;
class employee{
    string employeemane;
    string basicsalary;
    public:
      string name;
      int salary;
      int hra;
      int da;
      int gross;

    employee(){
        cout<<"enter a name:";
        cin>>name;
        cout<<"enter a salary:";
        cin>>salary;

      
    }
    void calculatehra(){

        hra=0.2*salary;
    }
    void calculateda(){
        da=0.1*salary;
    }
    void grosssalary(){
        gross= salary+ hra+da;
        cout<<gross;

    }
    
};
int main(){
    employee E;
    E.calculatehra();
    E.calculateda();
    E.grosssalary();
    return 0;
}