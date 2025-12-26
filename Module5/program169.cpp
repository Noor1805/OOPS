#include <iostream>
using namespace std;

int main() {
    try {
        int bal = 100;
        int wd = 200;
        if (wd > bal) throw wd;
    } catch (...) {
        cout << "Insufficient balance";
    }
    return 0;
}
