#include <iostream>
using namespace std;

int main() {
    try {
        int a[3];
        throw "Out of bound";
    } catch (...) {
        cout << "Exception";
    }
    return 0;
}
