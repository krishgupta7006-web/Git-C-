#include <iostream>
using namespace std;

class Marks {
private:
    int marks[5];

public:
    Marks() {
        for(int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    int highest() {
        int max = marks[0];

        for(int i = 1; i < 5; i++) {
            if(marks[i] > max)
                max = marks[i];
        }

        return max;
    }

    void display() {
        cout << "Highest Marks = " << highest();
    }
};

int main() {
    Marks obj;
    obj.display();

    return 0;
}