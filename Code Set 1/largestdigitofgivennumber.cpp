
#include<iostream>
using namespace std;
int main() {
    int n , digit , lar=0;
    cout<<"enter number:";
    cin>>n;
   
    while(n>0){
         digit=n%10;
        if(digit>lar){
           lar=digit;
        }
        
        n=n/10;
    }
    cout<<"largest number:"<<lar;
    return 0;
}
 