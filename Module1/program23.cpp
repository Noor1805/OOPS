#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 15;

    if (a > b) {
        if (a > c) cout << "A largest";
    } else {
        if (b > c) cout << "B largest";
        else cout << "C largest";
    }
    return 0;
}
