#include <iostream>
using namespace std;

int main() {
    try {
        int age = -1;
        if (age < 0) throw age;
    } catch (...) {
        cout << "Invalid input";
    }
    return 0;
}
