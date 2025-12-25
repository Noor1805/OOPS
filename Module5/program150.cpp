#include <iostream>
using namespace std;

int main() {
    try {
        throw 2.5;
    } catch (...) {
        cout << "Caught";
    }
    return 0;
}
