
#include<iostream>
using namespace std;

template<class T>
class Result {
    private:
        T marks[5];

    public:
        void input() {
            cout << "Enter marks of 5 subjects: ";

            for(int i = 0; i < 5; i++) {
                cin >> marks[i];
            }
        }

        T total() {
            T sum = 0;

            for(int i = 0; i < 5; i++) {
                sum = sum + marks[i];
            }

            return sum;
        }

        double average() {
            return total() / 5.0;
        }

        T highest() {
            T max = marks[0];

            for(int i = 1; i < 5; i++) {
                if(marks[i] > max) {
                    max = marks[i];
                }
            }

            return max;
        }

        T lowest() {
            T min = marks[0];

            for(int i = 1; i < 5; i++) {
                if(marks[i] < min) {
                    min = marks[i];
                }
            }

            return min;
        }

        void display() {
            cout << "\n Student Result " << endl;

            cout << "Total Marks: " << total() << endl;
            cout << "Average Marks: " << average() << endl;
            cout << "Highest Marks: " << highest() << endl;
            cout << "Lowest Marks: " << lowest() << endl;
        }
};

int main() {
    cout << "Integer Marks " << endl;

    Result<int> r1;
    r1.input();
    r1.display();

    cout << "\n Float Marks " << endl;

    Result<float> r2;
    r2.input();
    r2.display();

    return 0;
}
