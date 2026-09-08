#include<iostream>
using namespace std;
class number{
    int num;
    public:
    void input(int n){
        num=n;


    }
    void iseven(){
        if(num%2==0){
             num=2;
           
        } else{
            num=0;
        }
    }
    void displayresult(){
        if(num%2==0){
            cout<<"even:";
        }else {
            cout<<"odd:";

        }
    }
    

    

};
int main(){
    number N;
    N.input(6);
    N.iseven();
    N.displayresult();
    return 0;
}