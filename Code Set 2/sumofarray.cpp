#include <iostream>
using namespace std;

class ArraySum {
private:
    int a[10];

public:
    ArraySum() {
        for(int i = 0; i < 10; i++) {
            cin >> a[i];
        }
    }

    void findSum() {
        int sum = 0;

        for(int i = 0; i < 10; i++) {
            sum = sum + a[i];
        }

        cout << "Sum = " << sum;
    }
};

int main() {
    ArraySum obj;
    obj.findSum();

    return 0;
}