#include<iostream>
using namespace std;
int main() {
    int n , rev=0;
    cout<<"enter number:";
    cin>>n;
    while(n>0){
       rev=rev*10+n%10;
       n=n/10;
       
    }

   
    
    
    cout<<"reverse a number:"<<rev;
    return 0;

}