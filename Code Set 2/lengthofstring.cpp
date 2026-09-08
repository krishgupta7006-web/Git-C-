#include <iostream>
using namespace std;

class Text {
private:
    string str;

public:
    Text() {
        cin >> str;
    }

    void findLength() {
        int count = 0;

        while(str[count] != '\0') {
            count++;
        }

        cout << "Length = " << count;
    }
};

int main() {
    Text obj;
    obj.findLength();

    return 0;
}