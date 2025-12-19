#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 40, 20, 30, 50};
    int max = a[0], second = a[0];

    for (int i = 0; i < 5; i++) {
        if (a[i] > max) {
            second = max;
            max = a[i];
        } else if (a[i] > second && a[i] != max) {
            second = a[i];
        }
    }

    cout << "Second largest = " << second;
    return 0;
}
