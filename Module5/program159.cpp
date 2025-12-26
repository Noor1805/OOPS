#include <iostream>
using namespace std;

void fun() throw(int) {
    throw 1;
}

int main() {
    try {
        fun();
    } catch (int) {
        cout << "Handled";
    }
    return 0;
}
