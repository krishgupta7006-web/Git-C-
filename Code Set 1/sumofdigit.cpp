#include<iostream>
using namespace std;
int main() {
    int i, n, sum=0;
    cout<<"enter number:";
    cin>>n;
    for(i=1;i<=n;i++) {
        sum=sum+n%10;
        n=n/10;


    }
    cout<<"sum of digits:"<<sum;
    return 0;
}