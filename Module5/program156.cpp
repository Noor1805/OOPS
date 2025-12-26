#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw 1;
        } catch (int) {
            cout << "Inner\n";
        }
    } catch (...) {
        cout << "Outer";
    }
    return 0;
}
