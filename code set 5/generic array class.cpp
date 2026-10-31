
#include<iostream>
using namespace std;

template<class T>
class Array {
    private:
        T arr[5];

    public:
        void input() {
            cout << "Enter 5 elements: ";

            for(int i = 0; i < 5; i++) {
                cin >> arr[i];
            }
        }

        void display() {
            cout << "Array elements: ";

            for(int i = 0; i < 5; i++) {
                cout << arr[i] << " ";
            }

            cout << endl;
        }

        void largest() {
            T max = arr[0];

            for(int i = 1; i < 5; i++) {
                if(arr[i] > max) {
                    max = arr[i];
                }
            }

            cout << "Largest element: " << max << endl;
        }

        void smallest() {
            T min = arr[0];

            for(int i = 1; i < 5; i++) {
                if(arr[i] < min) {
                    min = arr[i];
                }
            }

            cout << "Smallest element: " << min << endl;
        }
};

int main() {
    cout << " Integer Array" << endl;

    Array<int> a1;
    a1.input();
    a1.display();
    a1.largest();
    a1.smallest();

    cout << "\n Float Array " << endl;

    Array<float> a2;
    a2.input();
    a2.display();
    a2.largest();
    a2.smallest();

    return 0;
}
