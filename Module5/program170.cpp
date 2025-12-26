#include <iostream>
using namespace std;

int main() {
    try {
        int pass = 123;
        if (pass != 111) throw pass;
    } catch (...) {
        cout << "Login failed";
    }
    return 0;
}
