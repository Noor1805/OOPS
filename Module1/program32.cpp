#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 5, 20, 8, 15};
    int max = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > max)
            max = a[i];
    }

    cout << "Largest element = " << max;
    return 0;
}
