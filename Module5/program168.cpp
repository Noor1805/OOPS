#include <iostream>
using namespace std;

class StackOverflow {};

int main() {
    try {
        throw StackOverflow();
    } catch (...) {
        cout << "Stack exception";
    }
    return 0;
}
