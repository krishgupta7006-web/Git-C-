#include <iostream>
using namespace std;

int main() {
    int n, a[100], x;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> x;

    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] == x) {
            cout << mid;
            return 0;
        }
        else if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << -1;

    return 0;
}