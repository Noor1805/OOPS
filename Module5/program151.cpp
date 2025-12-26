#include <iostream>
using namespace std;

void fun() {
    throw 1;
}

int main() {
    try {
        fun();
    } catch (int) {
        cout << "Unwound";
    }
    return 0;
}
