#include <iostream>
using namespace std;

void f() { throw 1; }

int main() {
    try {
        f();
    } catch (...) {
        cout << "Propagated";
    }
    return 0;
}
